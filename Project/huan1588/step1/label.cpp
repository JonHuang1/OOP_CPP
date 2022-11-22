#include "label.h"
#include "symboltable.h"
#include "instruction_buffer.h"
#include <fstream>
#include <string>
#include <iostream>

label::label(std::string _name, int _location, std::ofstream& savefile) : to_serialize(""), patchup_status(false) {
    int err = SymbolTable::get_instance()->insert_label(_name, _location);
    if (!err) {
        savefile << "error: attempting to add label with name " << _name << " twice" << std::endl;
        exit(1);
    }
}

void label::serialize(std::ofstream& savefile) {
    // if (savefile.is_open())
    // {
    //     savefile << to_serialize << std::endl;
    // }
    return;
}

bool label::need_patchup() {
    return patchup_status;
}