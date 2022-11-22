#include "declscal.h"
#include "symboltable.h"
#include <string>
#include <iostream>
#include <fstream>

declscal::declscal(std::string _name, std::ofstream& savefile) : to_serialize(""), patchup_status(false) {
    int err = SymbolTable::get_instance()->insert_var(_name, 1);
    if (!err) {
        savefile << "error: attempting to add variable with name " << _name << " twice" << std::endl;
        exit(1);
    }
}

void declscal::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool declscal::need_patchup() {
    return patchup_status;
}
    