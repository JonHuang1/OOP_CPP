#include "swap.h"
#include <fstream>
#include <string>

swap::swap() : to_serialize("Swap"), patchup_status(false) {
}

void swap::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool swap::need_patchup() {
    return patchup_status;
}