#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>

int main() {
	Faculty* f = new Faculty(2, 2, 2, "Dumbledore");
	Student* s = static_cast<Student*>(f); // illegal! 
	f->putSalary(1500.0); // Statement S0
	std::cout << "before putGPA(6,6) called" << std::endl;
	s->putGPA(6.6); // Statement S1
	std::cout << "before getGPA called " << std::endl;
	s->getGPA(); // Statement S2
	std::cout << std::endl;

	f = static_cast<Faculty*>(new Student(3, 3, 3, "Irena")); // illegal!
	std::cout << "before putSalary called " << std::endl;
	f->putSalary(500.0); // Statement S3
	std::cout << "before getSalary called " << std::endl;
	f->getSalary(); // Statement S4
	std::cout << std::endl;

	s = static_cast<Student*>(new Person(1, 1, 1, "Bob"));
	std::cout << "before getGPA is called " << std::flush << std::endl;
	s->getGPA(); // Statement S5
	std::cout << "finished" << std::flush << std::endl;
}
