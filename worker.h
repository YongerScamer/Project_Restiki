#ifndef worker_h
#define worker_h
#include "person.h"

class Worker : public Person
{
protected:
	int salary;
public:
	Worker();
	Worker(int _age, int _phone_number, std::string& _name, std::string& _surname, std::string& _email, int sal);
	void set_salary(int sal) {
		salary = sal;
	}
	int get_salary() {
		return salary;
	}
};
#endif