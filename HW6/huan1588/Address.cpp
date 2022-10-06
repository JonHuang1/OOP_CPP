#include <string>
#include "Address.h"

Address::Address(const std::string& _street, const std::string& _city, const std::string& _state, const int _zip) 
   : street(_street), city(_city), state(_state), zip(_zip)
{
}

int Address::getZipCode() const {
	return zip;
}

std::string Address::getAddress() const {
   std::string address = street+"\n";
   address +=city+"\n";
   address += state+"\n";
   address += std::to_string(zip)+"\n";
	return address;
}