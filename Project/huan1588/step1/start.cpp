#include "start.h"
#include <string>
#include <iostream>
#include <fstream>

start::start() : to_serialize("Start "), var_count(0), patchup_status(true) {
}

void start::serialize(std::ofstream& savefile) {
    to_serialize += std::to_string(var_count);
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool start::need_patchup() {
    return patchup_status;
}
    