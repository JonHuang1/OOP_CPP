#include "pushi.h"
#include <string>
#include <iostream>
#include <fstream>

pushi::pushi(int _integer) : integer(_integer), to_serialize("PushI "), patchup_status(false) {
}

void pushi::serialize(std::ofstream& savefile) {
    to_serialize += std::to_string(integer);
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool pushi::need_patchup() {
    return patchup_status;
}
    