#ifndef START_H_
#define START_H_
#include "stmt.h"

class start {
public:
    void serialize();
    
private:
    static start* instance;
    start();
    static int count;
};

#endif /* START_H_ */
