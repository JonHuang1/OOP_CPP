#include "mul.h"
#include <string>
#include <iostream>
#include <fstream>

mul::mul() : to_serialize("Mul"), patchup_status(false) {
}

void mul::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool mul::need_patchup() {
    return patchup_status;
}
    