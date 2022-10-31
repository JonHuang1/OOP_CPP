#ifndef SWAP_H_
#define SWAP_H_
#include "stmt.h"
#include <string>

class swap : public stmt {
public:
    void serialize(std::string file);
    bool need_patchup();
    swap();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* SWAP_H_ */