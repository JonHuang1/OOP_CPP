#include <memory>
#include <vector>
#include <mutex>
#include "Command.h"
#include "WorkerQueue.h"

WorkerQueue::WorkerQueue() {}

std::shared_ptr<Command> WorkerQueue::get() {
    // std::lock_guard<std::mutex> lock(outputLock);
    std::shared_ptr<Command> action = queue.front();
    queue.erase(queue.begin());
    return action;
}

void WorkerQueue::put(std::shared_ptr<Command> action) {
    queue.push_back(action);
}