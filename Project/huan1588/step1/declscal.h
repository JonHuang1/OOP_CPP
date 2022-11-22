#ifndef DECLSCAL_H_
#define DECLSCAL_H_
#include "stmt.h"
#include <string>

class declscal : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    declscal(std::string _name, std::ofstream& savefile);
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* DECLSCAL_H_ */
