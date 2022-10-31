#ifndef JUMPNZERO_H_
#define JUMPNZERO_H_
#include "stmt.h"
#include <string>

class jumpnzero : public stmt {
public:
    void serialize(std::string file);
    bool need_patchup();
    jumpnzero();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* JUMPNZERO_H_ */