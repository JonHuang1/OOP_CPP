#ifndef DATA_MEMORY_H_
#define DATA_MEMORY_H_
#include <vector>
#include <array>

class data_memory 
{
public:
    static data_memory* get_instance();
    void enter_sub(int size);
    void insert(int scal);
private:
    data_memory(int size);
    static data_memory* instance;
    
};

#endif /* DATA_MEMORY_H_ */