#include "declarr.h"
#include "symboltable.h"
#include <string>
#include <iostream>
#include <fstream>

declarr::declarr(std::string _name, int _length) : to_serialize(""), patchup_status(false) {
    SymbolTable::get_instance()->insert_var(_name, _length);
}

void declarr::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool declarr::need_patchup() {
    return patchup_status;
}
    