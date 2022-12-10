#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

#include "string_table.h"


int main(int argc, char** argv) 
{
    if (argc != 2)
    {
        std::cout << "error: must input a file" << std::endl;
    }

    // Data structures
    string_table* st = string_table::get_instance();


    // File I/O variables
    std::ifstream infile(argv[1]);
    std::string line;
    std::string opcode, operand;

    // Loop to collect all strings in string buffer
    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        iss >> opcode >> operand;
        if (opcode != "Start")
        {
            // Line is in string buffer
            // INPUT LINE INTO STRING BUFFER
            std::cout << "Input line into string buffer: " << line << std::endl;
            st->insert(line);
        }
    }

    // PRINT STRING TABLE CHECK
    // std::cout << "\nPrinting string table: " << std::endl;
    // st->print();
    // std::cout << std::endl;

    std::cout << "Start of opcodes" << std::endl;
    // Loop for opcodes
    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        iss >> opcode >> operand;
        std::cout << line << std::endl;
    }

}