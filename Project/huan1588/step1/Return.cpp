#include "Return.h"
#include "symboltable.h"
#include "instruction_buffer.h"
#include "symboltable.h"
#include <fstream>
#include <string>
#include <iostream>

Return::Return() : to_serialize("Return"), patchup_status(false) {
    // instruction_buffer::get_instance()->
    SymbolTable::get_instance()->leave_scope();
}

void Return::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
    return;
}

bool Return::need_patchup() {
    return patchup_status;
}