#include <stdlib.h>
#include <iostream>
#include <memory>
#include <vector>

#include "Command.h"

class WorkerQueue {
public:
    WorkerQueue();
    std::shared_ptr<Command> get();
    void put(std::shared_ptr<Command>);
private:
    std::vector<std::shared_ptr<Command>> queue;
    static std::mutex m;
};