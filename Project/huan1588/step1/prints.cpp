#include "prints.h"
#include <string>
#include <iostream>
#include <fstream>

prints::prints(std::string _string, string_buffer* _sb) : 
    to_serialize("Prints "), patchup_status(false), storage_index(_sb->get_index()) {
    _sb->insert(_string);
    to_serialize += std::to_string(storage_index);
}

void prints::serialize(std::ofstream& savefile) {
    if (savefile.is_open())
    {
        savefile << to_serialize << std::endl;
    }
}

bool prints::need_patchup() {
    return patchup_status;
}