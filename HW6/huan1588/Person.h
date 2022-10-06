#ifndef PERSON_H_
#define PERSON_H_
#include "Address.h"

class Person {
public:
   Person(const std::string& _name, const int _birthMonth, const int _birthDay, const int _birthYear, const Address& _address); 
   std::string getRole( ); 
   std::string getName( ); 
   int getZipCode( );
   std::string getDateOfBirth( ); 
private:
   std::string name;
   std::string dateOfBirth;
   const Address address;
};
#endif /* PERSON_H_ */
