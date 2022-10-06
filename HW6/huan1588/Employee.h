#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "Address.h"
#include "Person.h"

class Employee : public Person {
public:
   Employee(const std::string& _name, const int _birthMonth, const int _birthDay, const int _birthYear, const Address& _address, const double _salary); 
   virtual std::string getRole( ); 
   virtual double getSalary( ); 
private:
   double salary;
};
#endif /* EMPLOYEE_H_ */
