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
#include "Return.h"
#include "start.h"
#include "stmt.h"
#include "string_buffer.h"
#include "swap.h"
#include "symboltable.h"
#include "tableentry.h"

void get_instruction_from_str(std::string& opcode, std::string& operand, std::string& operand2, std::ofstream& savefile)
{
    std::unique_ptr<stmt> instruction;
    instruction_buffer* ib = instruction_buffer::get_instance();
    string_buffer* sb = string_buffer::get_instance();
    if (opcode == "add")
    {
        instruction = std::make_unique<add>();
    }
    else if (opcode == "declarr")
    {
        std::make_unique<declarr>(operand, stoi(operand2), savefile);
        return;
    }
    else if (opcode == "declscal")
    {
        std::make_unique<declscal>(operand, savefile);
        return;
    }
    else if (opcode == "div")
    {
        instruction = std::make_unique<Div>();
    }
    else if (opcode == "dup")
    {
        instruction =  std::make_unique<dup>();
    }
    else if (opcode == "end")
    {
        if (!operand.empty())
        {
            savefile << "Error: Operand in end opcode" << std::endl;
            exit(1);
        }
        return;
    }
    else if (opcode == "exit")
    {
        instruction = std::make_unique<Exit>();
    }
    else if (opcode == "gosub")
    {
        instruction = std::make_unique<gosub>(operand);
    }
    else if (opcode == "gosublabel")
    {
        instruction = std::make_unique<gosublabel>(operand, savefile);
    }
    else if (opcode == "jump")
    {
        instruction = std::make_unique<jump>(operand);
    }
    else if (opcode == "jumpnzero")
    {
        instruction = std::make_unique<jumpnzero>(operand);
    }
    else if (opcode == "jumpzero")
    {
        instruction = std::make_unique<jumpzero>(operand);
    }
    else if (opcode == "label")
    {
        std::make_unique<label>(operand, ib->get_location(), savefile);
        return;
    }
    else if (opcode == "mul")
    {
        instruction = std::make_unique<mul>();
    }
    else if (opcode == "negate")
    {
        instruction = std::make_unique<negate>();
    }
    else if (opcode == "pop")
    {
        instruction = std::make_unique<pop>();
    }
    else if (opcode == "poparr")
    {
        instruction = std::make_unique<poparr>(operand);
    }
    else if (opcode == "popscal")
    {
        instruction = std::make_unique<popscal>(operand);
    }
    else if (opcode == "prints")
    {
        instruction = std::make_unique<prints>(operand, sb);
    }
    else if (opcode == "printtos")
    {
        instruction = std::make_unique<printtos>();
    }
    else if (opcode == "pusharr")
    {
        instruction = std::make_unique<pusharr>(operand);
    }
    else if (opcode == "pushi")
    {
        instruction = std::make_unique<pushi>(stoi(operand));
    }
    else if (opcode == "pushscal")
    {
        instruction = std::make_unique<pushscal>(operand);
    }
    else if (opcode == "return")
    {
        instruction = std::make_unique<Return>();
    }
    else if (opcode == "start")
    {
        instruction = std::make_unique<start>();
    }
    else if (opcode == "swap")
    {
        instruction = std::make_unique<swap>();
    }
    else
    {
        instruction = NULL;
        std::cout << "Invalid instruction encountered" << std::endl;
    }

    if (instruction.get() == nullptr)
    {
        std::cout << "Error, got null pointer when passed in opcode " << opcode << std::endl;
        //exit(1);
    }

    ib->insert(std::move(instruction));
}

int main(int argc, char** argv) 
{

    if (argc != 2)
    {
        std::cout << "Error, must specify file to parse" << std::endl;
        exit(1);
    }

    std::ifstream infile(argv[1]);
    
    std::string line;
    std::ofstream savefile("test", std::ofstream::out);
    instruction_buffer* ib = instruction_buffer::get_instance();
    int end = 0; // end flag

    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string opcode, operand, operand2;
        iss >> opcode >> operand >> operand2;
        std::cout << line << std::endl;
        if (end == 1) {
            savefile << "error: code encountered after an end statement" << std::endl;
            exit(1);
        }
        if (opcode == "end") {
            end = 1;
        }

        get_instruction_from_str(opcode, operand, operand2, savefile);
    }
    if (end != 1) {
        savefile << "error: no end statement in program" << std::endl;
        exit(1);
    }
    ib->serialize(savefile);
    savefile.close();
    // std::cout << instruction_buffer::get_instance()->get_location() << std::endl;
}

