#ifndef POP_H_
#define POP_H_
#include "stmt.h"
#include <string>

class pop : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    pop();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* POP_H_ */
