#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <memory>
#include "add.h"
#include "declarr.h"
#include "declscal.h"
#include "div.h"
#include "dup.h"
#include "end.h"
#include "exit.h"
#include "gosub.h"
#include "gosublabel.h"
#include "instruction_buffer.h"
#include "jump.h"
#include "jumpnzero.h"
#include "jumpzero.h"
#include "label.h"
#include "map.h"
#include "mul.h"
#include "negate.h"
#include "pop.h"
#include "poparr.h"
#include "popscal.h"
#include "prints.h"
#include "printtos.h"
#include "pusharr.h"
#include "pushi.h"
#include "pushscal.h"
#include "return.h"
#include "start.h"
#include "stmt.h"
#include "swap.h"
#include "symboltable.h"
#include "tableentry.h"

std::unique_ptr<stmt> get_instruction_from_str(std::string& opcode, std::string& operand)
{
    std::unique_ptr<stmt> instruction;
    if (opcode == "add")
    {

    }
    else if (opcode == "declarr")
    {

    }
    else if (opcode == "declscal")
    {

    }
    else if (opcode == "div")
    {

    }
    else if (opcode == "dup")
    {

    }
    else if (opcode == "end")
    {
        
    }
    else if (opcode == "exit")
    {
        
    }
    else if (opcode == "gosub")
    {
        
    }
    else if (opcode == "gosublabel")
    {
        
    }
    else if (opcode == "jump")
    {
        
    }
    else if (opcode == "jumpnzero")
    {
        
    }
    else if (opcode == "jumpzero")
    {
        
    }
    else if (opcode == "label")
    {
        
    }
    else if (opcode == "mul")
    {
        
    }
    else if (opcode == "negate")
    {
        
    }
    else if (opcode == "pop")
    {
        
    }
    else if (opcode == "poparr")
    {
        
    }
    else if (opcode == "popscal")
    {
        
    }
    else if (opcode == "prints")
    {
        
    }
    else if (opcode == "printtos")
    {
        
    }
    else if (opcode == "pusharr")
    {
        
    }
    else if (opcode == "pushi")
    {
        
    }
    else if (opcode == "pushscal")
    {
        
    }
    else if (opcode == "return")
    {
        
    }
    else if (opcode == "start")
    {
        instruction = std::make_unique<start>();
        instruction->serialize("test");
    }
    else if (opcode == "swap")
    {
        
    }
    else
    {
        instruction = NULL;
    }

    return instruction;
}

int main() 
{
    // std::ifstream infile("/home/jonhuang918/ECE39595/Project/OutputAndTestCases/TestCases10_08_22/0StartExit");
    std::ifstream infile("/home/jon/ECE39595/Project/OutputAndTestCases/TestCases10_08_22/0StartExit");
    
    std::string line;
    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string opcode, operand, arg3;
        iss >> opcode >> operand >> arg3;
        std::cout << line << std::endl;
        
        // std::cout << "opcode = " + opcode << std::endl;
        // std::cout << "operand = " + operand << std::endl;
        // std::cout << "arg3 = " + arg3 << std::endl << std::endl;

        get_instruction_from_str(opcode, operand);
    }

    
}

/**
 * Use stoi(string) to convert string operand to integer operand
 */