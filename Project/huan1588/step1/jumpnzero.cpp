#include "jumpnzero.h"
#include "symboltable.h"
#include "instruction_buffer.h"
#include "symboltable.h"
#include <fstream>
#include <string>
#include <iostream>

jumpnzero::jumpnzero(std::string _name) : to_serialize("JumpNZero, " + _name + ", "), patchup_status(true), dest(_name) {}

void jumpnzero::serialize(std::ofstream& savefile) {
    patchup();
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
    return;
}

bool jumpnzero::need_patchup() {
    return patchup_status;
}

void jumpnzero::patchup() {
    int destination = SymbolTable::get_instance()->find_symbol(dest)->get_location();
    to_serialize += "(" + std::to_string(destination) + ")";
}