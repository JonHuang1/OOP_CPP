#ifndef EXIT_H_
#define EXIT_H_
#include "stmt.h"
#include <string>

class exit : public stmt {
public:
    void serialize(std::string file);
    bool need_patchup();
    exit();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* EXIT_H_ */