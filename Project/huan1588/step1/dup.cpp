#include "dup.h"
#include <string>
#include <iostream>
#include <fstream>

dup::dup() : to_serialize("Dup"), patchup_status(false) {
}

void dup::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool dup::need_patchup() {
    return patchup_status;
}
    