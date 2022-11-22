#include "declscal.h"
#include "symboltable.h"
#include <string>
#include <iostream>
#include <fstream>

declscal::declscal(std::string _name) : to_serialize(""), patchup_status(false) {
    SymbolTable::get_instance()->insert_var(_name, 1);
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
    