#include "person.h"

Person::Person() {
	age = 100;
	phone_number = 87777777777;
	name = "Ivan";
	surname = "Ivanov";
	email = "ivanow@yandex.ru";
}
Person::Person(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email) {
	age = _age;
	phone_number = _phone_number;
	name = _name;
	surname = _surname;
	email = _email;
}
int Person::get_age() {
	return age;
}
int Person::get_phone_number() {
	return phone_number;
}
std::string& Person::get_name() {
	return name;
}
std::string Person::get_surname() {
	return surname;
}
std::string Person::get_email() {
	return email;
}
void Person::set_age(int _age) {
	age = _age;
}
void Person::set_phone_number(int _phone_number) {
	phone_number = _phone_number;
}
void Person::set_name(std::string& _name) {
	name = _name;
}
void Person::set_surname(std::string& _surname) {
	surname = _surname;
}
void Person::set_email(std::string& _email) {
	email = _email;
}
std::ostream& operator<< (std::ostream& out, Person& c) {
	out << c.get_name() << " " << c.get_surname() << " age: " << c.age << "\nphone: " << c.get_phone_number() << " email: " << c.get_email();
	return out;
}