#ifndef person_h
#define person_h
#include<iostream>
class Person
{
public:
	int age;
	int phone_number;
	std::string name;
	std::string surname;
	std::string email;
	Person();
	Person(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email);
	int get_age();
	int get_phone_number();
	std::string& get_name();
	std::string get_surname();
	std::string get_email();
	void set_age(int _age);
	void set_phone_number(int _phone_number);
	void set_name(std::string& _name);
	void set_surname(std::string& _surname);
	void set_email(std::string& _email);
	void random_person();
	friend std::ostream& operator<< (std::ostream& out, Person& c);
	virtual ~Person() = default;
};
std::ostream& operator<< (std::ostream& out, Person& c);

#endif