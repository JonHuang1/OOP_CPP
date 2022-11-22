#ifndef RETURN_H_
#define RETURN_H_
#include "stmt.h"
#include <string>

class Return : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    void patchup();
    Return();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* RETURN_H_ */
