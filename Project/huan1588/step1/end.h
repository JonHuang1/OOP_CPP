#ifndef END_H_
#define END_H_
#include "stmt.h"
#include <string>

class end : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    end();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* ADD_H_ */