#include "head_cluster.h"

HeadCluster::HeadCluster() {
	Person();
	salary = 100000;
}

HeadCluster::HeadCluster(int _age, int _phone_number, std::string& _name, std::string& _surname, std::string& _email, int sal) {
	age = _age;
	phone_number = _phone_number;
	name = _name;
	surname = _surname;
	email = _email;
	salary = sal;
}