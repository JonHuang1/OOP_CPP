#ifndef ADD_H_
#define ADD_H_
#include "stmt.h"
#include <string>

class add : public stmt {
public:
    void serialize(std::string file);
    bool need_patchup();
    add();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* ADD_H_ */