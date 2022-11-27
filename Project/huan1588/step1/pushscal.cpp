#include "pushscal.h"
#include "symboltable.h"
#include <string>
#include <iostream>
#include <fstream>

pushscal::pushscal(std::string _name) : 
to_serialize("PushScalar "), patchup_status(true), name(_name) {
}

void pushscal::serialize(std::ofstream& savefile) {
    patchup();
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool pushscal::need_patchup() {
    return patchup_status;
}

void pushscal::patchup() {
    int location = SymbolTable::get_instance()->find_symbol(name)->get_location();
    to_serialize += std::to_string(location);
}
    