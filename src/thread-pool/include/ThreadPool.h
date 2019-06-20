#pragma once

#include <functional>
#include <mutex>
#include <queue>
#include <thread>
#include <atomic>
#include <vector>

class ThreadPool
{
private:

    std::mutex 			m_queue_mutex;
    std::mutex 			m_results_mutex;
    std::vector<std::thread> 	m_threads;
    unsigned int 			m_thread_count;

public:

    ThreadPool(unsigned int pool_size);

    template <class F, class R, class A>
    std::vector<R> map(const F& f, std::vector<A> args);

};
