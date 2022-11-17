#include "jump.h"
#include "symboltable.h"
#include "instruction_buffer.h"
#include "symboltable.h"
#include <fstream>
#include <string>
#include <iostream>

jump::jump(std::string _name) : to_serialize("Jump, "), patchup_status(true), dest(_name) {}

void jump::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
    return;
}

bool jump::need_patchup() {
    return patchup_status;
}

void jump::patchup() {
    double destination = SymbolTable::get_instance()->find_symbol(dest)->get_location();
    to_serialize += std::to_string(destination);
}