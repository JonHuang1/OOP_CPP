#ifndef EXIT_H_
#define EXIT_H_
#include "stmt.h"
#include <string>

class Exit : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    Exit();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* EXIT_H_ */