#include "Exit.h"
#include <string>
#include <iostream>
#include <fstream>

Exit::Exit() : to_serialize("Exit"), patchup_status(false) {
}

void Exit::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool Exit::need_patchup() {
    return patchup_status;
}
    