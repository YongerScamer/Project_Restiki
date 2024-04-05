#include "worker.h"
#include "restaurant.h"

Worker::Worker(int _age, int _phone_number, std::string& _name, std::string& _surname, std::string& _email, int sal) {
	age = _age;
	phone_number = _phone_number;
	name = _name;
	surname = _surname;
	email = _email;
	salary = sal;
}

Worker::Worker() {
	Person();
	salary = 100000;
}
