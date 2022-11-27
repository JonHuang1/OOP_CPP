#include "jumpzero.h"
#include "symboltable.h"
#include "instruction_buffer.h"
#include "symboltable.h"
#include <fstream>
#include <string>
#include <iostream>

jumpzero::jumpzero(std::string _name) : 
to_serialize("JumpZero "), patchup_status(true), dest(_name) {}

void jumpzero::serialize(std::ofstream& savefile) {
    patchup();
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
    return;
}

bool jumpzero::need_patchup() {
    return patchup_status;
}

void jumpzero::patchup() {
    int destination = SymbolTable::get_instance()->find_symbol(dest)->get_location();
    to_serialize += std::to_string(destination);
}