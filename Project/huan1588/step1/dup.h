#ifndef DUP_H_
#define DUP_H_
#include "stmt.h"
#include <string>

class dup : public stmt {
public:
    void serialize(std::string file);
    bool need_patchup();
    dup();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* DUP_H_ */
