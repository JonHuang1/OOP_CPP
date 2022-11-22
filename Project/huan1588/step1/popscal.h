#ifndef POPSCAL_H_
#define POPSCAL_H_
#include "stmt.h"
#include <string>

class popscal : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    popscal(std::string _name);
    void patchup();
private:
    std::string to_serialize;
    bool patchup_status;
    std::string name;
};

#endif /* POPSCAL_H_ */
