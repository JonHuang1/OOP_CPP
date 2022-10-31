#ifndef GOSUB_H_
#define GOSUB_H_
#include "stmt.h"
#include <string>

class gosub : public stmt {
public:
    void serialize(std::string file);
    bool need_patchup();
    gosub();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* GOSUB_H_ */