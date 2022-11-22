#include "end.h"
#include <string>
#include <iostream>
#include <fstream>

end::end() : to_serialize(""), patchup_status(false) {
}

void end::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool end::need_patchup() {
    return patchup_status;
}
    