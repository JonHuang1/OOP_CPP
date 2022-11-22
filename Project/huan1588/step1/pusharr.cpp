#include "pusharr.h"
#include "symboltable.h"
#include <string>
#include <iostream>
#include <fstream>

pusharr::pusharr(std::string _name) : to_serialize("PushArray " + _name + ", "), patchup_status(true), name(_name) {
}

void pusharr::serialize(std::ofstream& savefile) {
    patchup();
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool pusharr::need_patchup() {
    return patchup_status;
}

void pusharr::patchup() {
    int location = SymbolTable::get_instance()->find_symbol(name)->get_location();
    to_serialize += "(" + std::to_string(location) + ")";
}
    