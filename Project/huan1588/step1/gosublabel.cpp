#include "gosublabel.h"
#include "symboltable.h"
#include "instruction_buffer.h"
#include "symboltable.h"
#include <fstream>
#include <string>
#include <iostream>

gosublabel::gosublabel(std::string _name) : to_serialize("GoSubLabel, " + _name), patchup_status(true) {
    SymbolTable::get_instance()->insert_label(_name, instruction_buffer::get_instance()->get_location());
    SymbolTable::get_instance()->enter_scope();
}

void gosublabel::serialize(std::ofstream& savefile) {
    patchup();
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
    return;
}

bool gosublabel::need_patchup() {
    return patchup_status;
}

void gosublabel::patchup() {
    int var_num = SymbolTable::get_instance()->get_inner_size();
    to_serialize += " (" + std::to_string(var_num) + ")";
}