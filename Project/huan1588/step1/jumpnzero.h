#ifndef JUMPNZERO_H_
#define JUMPNZERO_H_
#include "stmt.h"
#include <string>

class jumpnzero : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    void patchup();
    jumpnzero(std::string _name);
private:
    std::string to_serialize;
    bool patchup_status;
    std::string dest;
};

#endif /* JUMPNZERO_H_ */