#ifndef head_cluster_h
#define head_cluster_h
#include "person.h"
#include "cluster.h"

class HeadCluster : public Person
{
protected:
	int salary;
public:
	HeadCluster();
	HeadCluster(int _age, int _phone_number, std::string& _name, std::string& _surname, std::string& _email, int sal);
	void set_salary(int sal) {
		salary = sal;
	}
	~HeadCluster() {}
};

#endif

