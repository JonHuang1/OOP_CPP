#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <memory>
#include "add.h"
#include "declarr.h"
#include "declscal.h"
#include "Div.h"
#include "dup.h"
#include "end.h"
#include "Exit.h"
#include "gosub.h"
#include "gosublabel.h"
#include "instruction_buffer.h"
#include "jump.h"
#include "jumpnzero.h"
#include "jumpzero.h"
#include "label.h"
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
#include "string_buffer.h"
#include "swap.h"
#include "symboltable.h"
#include "tableentry.h"

void get_instruction_from_str(std::string& opcode, std::string& operand, std::ofstream& savefile, string_buffer* sb)
{
    std::unique_ptr<stmt> instruction;
    instruction_buffer* ib = instruction_buffer::get_instance();
    if (opcode == "add")
    {
        instruction = std::make_unique<add>();
        instruction->serialize(savefile);
    }
    else if (opcode == "declarr")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "declscal")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "div")
    {
        instruction = std::make_unique<Div>();
        instruction->serialize(savefile);
    }
    else if (opcode == "dup")
    {
        instruction =  std::make_unique<dup>();
        instruction->serialize(savefile);
    }
    else if (opcode == "end")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "exit")
    {
        instruction = std::make_unique<Exit>();
        instruction->serialize(savefile);
    }
    else if (opcode == "gosub")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "gosublabel")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "jump")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "jumpnzero")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "jumpzero")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "label")
    {
        std::cout << operand << ", " << ib->get_location() << std::endl;
        instruction = std::make_unique<label>(operand, ib->get_location());
        instruction->serialize(savefile);
    }
    else if (opcode == "mul")
    {
        instruction = std::make_unique<mul>();
        instruction->serialize(savefile);
    }
    else if (opcode == "negate")
    {
        instruction = std::make_unique<negate>();
        instruction->serialize(savefile);
    }
    else if (opcode == "pop")
    {
        instruction = std::make_unique<pop>();
        instruction->serialize(savefile);
    }
    else if (opcode == "poparr")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "popscal")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "prints")
    {
        instruction = std::make_unique<prints>(operand, sb);
        instruction->serialize(savefile);
    }
    else if (opcode == "printtos")
    {
        instruction = std::make_unique<printtos>();
        instruction->serialize(savefile);
    }
    else if (opcode == "pusharr")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "pushi")
    {
        instruction = std::make_unique<pushi>(stoi(operand));
        instruction->serialize(savefile);
    }
    else if (opcode == "pushscal")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "return")
    {
        // instruction = std::make_unique<negate>();
        // instruction->serialize(savefile);
    }
    else if (opcode == "start")
    {
        instruction = std::make_unique<start>();
        instruction->serialize(savefile);
    }
    else if (opcode == "swap")
    {
        instruction = std::make_unique<swap>();
        instruction->serialize(savefile);
    }
    else
    {
        instruction = NULL;
    }
    ib->insert(std::move(instruction));
}

int main() 
{
    std::ifstream infile("/home/jonhuang918/ECE39595/Project/OutputAndTestCases/TestCases10_08_22/11Label");
    // std::ifstream infile("/home/jon/ECE39595/Project/OutputAndTestCases/TestCases10_08_22/0StartExit");
    
    std::string line;
    std::ofstream savefile("test", std::ofstream::out);
    string_buffer* sb = new string_buffer();
    // instruction_buffer* ib = instruction_buffer::get_instance();

    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string opcode, operand, arg3;
        iss >> opcode >> operand >> arg3;
        std::cout << line << std::endl;
        
        // std::cout << "opcode = " + opcode << std::endl;
        // std::cout << "operand = " + operand << std::endl;
        // std::cout << "arg3 = " + arg3 << std::endl << std::endl;

        get_instruction_from_str(opcode, operand, savefile, sb);
    }
    savefile.close();
    // std::cout << instruction_buffer::get_instance()->get_location() << std::endl;
}

