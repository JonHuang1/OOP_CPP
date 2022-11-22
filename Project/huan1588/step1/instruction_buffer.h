#ifndef INSTRUCTION_BUFFER_H_
#define INSTRUCTION_BUFFER_H_
#include <memory>
#include <vector>
#include "stmt.h"

class instruction_buffer {
public:
    static instruction_buffer* get_instance();
    void insert(std::unique_ptr<stmt> _instruction);
    std::unique_ptr<stmt> get_instruction(int _index);
    int get_location();
    void serialize(std::ofstream& savefile);
    int find_subroutine();
private:
    instruction_buffer();
    static instruction_buffer* instance;
    std::vector<std::unique_ptr<stmt>> buffer;
};

#endif /* INSTRUCTION_BUFFER_H_ */