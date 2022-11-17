#include "label.h"
#include "symboltable.h"
#include "instruction_buffer.h"
#include <fstream>
#include <string>
#include <iostream>

label::label(std::string _name, int _location) : to_serialize(""), patchup_status(false) {
    std::cout << 1 << std::endl;
    SymbolTable::get_instance()->insert_label(_name, _location);
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