#ifndef PRINTS_H_
#define PRINTS_H_
#include "stmt.h"
#include "string_buffer.h"
#include <string>

class prints : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    prints(std::string _string, string_buffer* _sb);
private:
    std::string to_serialize;
    bool patchup_status;
    int storage_index;
};

#endif /* PRINTS_H_ */