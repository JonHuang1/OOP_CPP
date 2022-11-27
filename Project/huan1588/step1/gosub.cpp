#include "gosub.h"
#include "symboltable.h"
#include "instruction_buffer.h"
#include "symboltable.h"
#include <fstream>
#include <string>
#include <iostream>

gosub::gosub(std::string _name) : 
to_serialize("GoSub "), patchup_status(true), dest(_name) {}

void gosub::serialize(std::ofstream& savefile) {
    patchup();
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
    return;
}

bool gosub::need_patchup() {
    return patchup_status;
}

void gosub::patchup() {
    int destination = SymbolTable::get_instance()->find_symbol(dest)->get_location();
    to_serialize += std::to_string(destination);
}