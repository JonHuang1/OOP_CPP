#include "printtos.h"
#include <string>
#include <iostream>
#include <fstream>

printtos::printtos() : to_serialize("PrintTOS"), patchup_status(false) {
}

void printtos::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool printtos::need_patchup() {
    return patchup_status;
}
    