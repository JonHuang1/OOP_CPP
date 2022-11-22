#include "start.h"
#include "symboltable.h"
#include <string>
#include <iostream>
#include <fstream>

start::start() : var_count(0), to_serialize("Start "), patchup_status(true) {
}

void start::serialize(std::ofstream& savefile) {
    var_count = SymbolTable::get_instance()->get_size();
    to_serialize += std::to_string(var_count);
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool start::need_patchup() {
    return patchup_status;
}
    