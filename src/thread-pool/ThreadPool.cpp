#include "ThreadPool.h"


ThreadPool::ThreadPool(unsigned int pool_size=std::thread::hardware_concurrency())
{
	m_thread_count=pool_size;
	// m_threads(0);
    // m_queue_mutex(0);
}

template <class F, class R, class A>
std::vector<R> ThreadPool::map(const F& f, std::vector<A> args)
{
    std::queue <std::function<R()>> tasks;
    std::vector<R> results;
    for(auto& arg: args)
    {
        auto task = [&f, &arg]()
        {
            return f(arg);
        };
        tasks.push(std::move(task));
    }
    for (unsigned int i = 0; i < m_thread_count; ++i)
    {
        std::thread t([this, &tasks, &results])()
        {
            while(true)
            {
                if(m_queue_mutex.try_lock())
                {
                if (!tasks.empty()) 
                {
                    auto task = tasks.front();
                    tasks.pop();
                    m_queue_mutex.unlock();
                    auto res = task();
                    std::lock_guard<std::mutex> results_lock(m_results_mutex);
                    results.push_back(res);
                }
                else
                {
                    m_queue_mutex.unlock();
                    break;
                }
                }
            }
        };
    }
    
    m_threads.push_back(std::move(t));
}

