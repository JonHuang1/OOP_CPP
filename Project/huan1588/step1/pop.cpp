#include "pop.h"
#include <fstream>
#include <string>

pop::pop() : to_serialize("Pop"), patchup_status(false) {
}

void pop::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool pop::need_patchup() {
    return patchup_status;
}