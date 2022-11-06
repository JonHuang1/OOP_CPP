#include "add.h"
#include <string>
#include <iostream>
#include <fstream>

add::add() : to_serialize("Add"), patchup_status(false) {
}

void add::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool add::need_patchup() {
    return patchup_status;
}
    