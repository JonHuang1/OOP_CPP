#ifndef NEGATE_H_
#define NEGATE_H_
#include "stmt.h"
#include <string>

class negate : public stmt {
public:
    void serialize(std::string file);
    bool need_patchup();
    negate();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* NEGATE_H_ */