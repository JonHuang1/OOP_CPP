#ifndef PUSHSCAL_H_
#define PUSHSCAL_H_
#include "stmt.h"
#include <string>

class pushscal : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    pushscal(std::string _name);
    void patchup();
private:
    std::string to_serialize;
    bool patchup_status;
    std::string name;
};

#endif /* PUSHSCAL_H_ */
