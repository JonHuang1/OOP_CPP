#include <memory>
#include <vector>
#include <mutex>
#include "Command.h"
#include "WorkerQueue.h"

std::mutex WorkerQueue::m;

WorkerQueue::WorkerQueue() {}

std::shared_ptr<Command> WorkerQueue::get() {
    std::lock_guard<std::mutex> lck(m);
    if (queue.empty())
    {
        return NULL;
    }
    else
    {
        std::shared_ptr<Command> action = queue.front();
        queue.erase(queue.begin());
        return action;
    }
}

void WorkerQueue::put(std::shared_ptr<Command> action) {
    std::lock_guard<std::mutex> lck(m);
    queue.push_back(action);
}