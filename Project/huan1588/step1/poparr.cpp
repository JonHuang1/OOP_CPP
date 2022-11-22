#include "poparr.h"
#include "symboltable.h"
#include <string>
#include <iostream>
#include <fstream>

poparr::poparr(std::string _name) : to_serialize("PopArray " + _name + ", "), patchup_status(true), name(_name) {
}

void poparr::serialize(std::ofstream& savefile) {
    patchup();
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool poparr::need_patchup() {
    return patchup_status;
}

void poparr::patchup() {
    int location = SymbolTable::get_instance()->find_symbol(name)->get_location();
    to_serialize += "(" + std::to_string(location) + ")";
}
    