#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream infile("/home/jon/ECE39595/Project/OutputAndTestCases/TestCases10_08_22/0StartExit");
    
    std::string line;
    while (std::getline(infile, line))
    {
        std::cout << line << std::endl;
        std::istringstream iss(line);
        std::string opcode, operand;
        iss >> opcode >> operand;
        std::cout << "opcode = " + opcode << std::endl;
        std::cout << "operand = " + operand << std::endl;
    }
}

/**
 * Use stoi(string) to convert string operand to integer operand
 */