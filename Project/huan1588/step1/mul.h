#ifndef MUL_H_
#define MUL_H_
#include "stmt.h"
#include <string>

class mul : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    mul();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* MUL_H_ */