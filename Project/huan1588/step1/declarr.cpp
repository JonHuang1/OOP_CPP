#include "declarr.h"
#include "symboltable.h"
#include <string>
#include <iostream>
#include <fstream>

declarr::declarr(std::string _name, int _length, std::ofstream& savefile) : to_serialize(""), patchup_status(false) {
    int err = SymbolTable::get_instance()->insert_var(_name, _length);
    if (!err) {
        savefile << "error: attempting to add variable with name " << _name << " twice" << std::endl;
        exit(1);
    }
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
    