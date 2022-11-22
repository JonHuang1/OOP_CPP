#include "popscal.h"
#include "symboltable.h"
#include <string>
#include <iostream>
#include <fstream>

popscal::popscal(std::string _name) : to_serialize("PopScalar " + _name + ", "), patchup_status(true), name(_name) {
}

void popscal::serialize(std::ofstream& savefile) {
    patchup();
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool popscal::need_patchup() {
    return patchup_status;
}

void popscal::patchup() {
    int location = SymbolTable::get_instance()->find_symbol(name)->get_location();
    to_serialize += "(" + std::to_string(location) + ")";
}
    