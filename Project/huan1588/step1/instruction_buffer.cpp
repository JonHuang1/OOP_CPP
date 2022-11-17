#include "stmt.h"
#include "instruction_buffer.h"
#include <vector>
#include <memory>

instruction_buffer* instruction_buffer::instance = nullptr;

instruction_buffer* instruction_buffer::get_instance() {
    if (instance == nullptr) {
        instance = new instruction_buffer();
    }
    return instance;
}

instruction_buffer::instruction_buffer() {
}

int instruction_buffer::get_location() {
    return buffer.size();
}

void instruction_buffer::insert(std::unique_ptr<stmt> _instruction) {
    buffer.push_back(std::move(_instruction));
}

std::unique_ptr<stmt> instruction_buffer::get_instruction(int _index) {
    return std::move(buffer.at(_index));
}