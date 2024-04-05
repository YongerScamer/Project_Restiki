#ifndef director_h
#define director_h
#include "worker.h"

class Director : public Worker
{
public:
	Director();
	Director(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email, int sal);
	~Director() {}
};

#endif