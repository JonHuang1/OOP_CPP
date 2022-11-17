#include "negate.h"
#include <fstream>
#include <string>

negate::negate() : to_serialize("Negate"), patchup_status(false) {
}

void negate::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool negate::need_patchup() {
    return patchup_status;
}