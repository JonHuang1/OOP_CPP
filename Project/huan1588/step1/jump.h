#ifndef JUMP_H_
#define JUMP_H_
#include "stmt.h"
#include <string>

class jump : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    void patchup();
    jump(std::string _name);
private:
    std::string to_serialize;
    bool patchup_status;
    std::string dest;
};

#endif /* JUMP_H_ */
