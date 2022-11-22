#ifndef JUMPZERO_H_
#define JUMPZERO_H_
#include "stmt.h"
#include <string>

class jumpzero : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    void patchup();
    jumpzero(std::string _name);
private:
    std::string to_serialize;
    bool patchup_status;
    std::string dest;
};

#endif /* JUMJUMPZERO_H_P_H_ */
