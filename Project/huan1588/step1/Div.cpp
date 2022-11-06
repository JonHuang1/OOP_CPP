#include "Div.h"
#include <string>
#include <iostream>
#include <fstream>

Div::Div() : to_serialize("Div"), patchup_status(false) {
}

void Div::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool Div::need_patchup() {
    return patchup_status;
}
    