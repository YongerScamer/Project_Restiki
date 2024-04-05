#ifndef ceo_h
#define ceo_h
#include "person.h"
#include "restaurant_chain.h"

class RestaurantChain;

class CEO : public Person
{
protected:
	int salary;
public:
	CEO();
	CEO(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email, int sal);
	~CEO() {}
};

#endif