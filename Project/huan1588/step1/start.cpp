#include "start.h"
#include <string>
#include <iostream>
#include <fstream>

start::start() {
    to_serialize = "Start ";
    var_count = 0;
    patchup_status = false;
}

void start::serialize(std::string file) {
    // std::ofstream savefile(file, std::ios_base::binary);
    std::ofstream savefile(file, std::ofstream::out);
    to_serialize += std::to_string(var_count);
    if (savefile.good())
    {
        savefile.write((char*) &to_serialize, to_serialize.size());
        savefile.close();
    }
}

bool need_patchup() {
    return patchup_status;
}
    