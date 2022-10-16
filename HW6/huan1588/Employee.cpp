#include "Address.h"
#include "Person.h"
#include "Employee.h"

Employee::Employee(const std::string& _name, const int _birthMonth, const int _birthDay, const int _birthYear, const Address& _address, const double _salary)
   : Person(_name, _birthMonth, _birthDay, _birthYear, _address), salary(_salary)
{ 
}

std::string Employee::getRole( ) { 
   return "Employee";
}

double Employee::getSalary( ) { 
   return salary;
}
