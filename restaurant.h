#ifndef restaurant_h
#define restaurant_h
#include<memory>
#include<vector>
#include"worker.h"
#include"director.h"

class Worker;
class Director;

class Restaurant
{
public:
	int coord_x, coord_y, size, jobs;
	std::string name;
	std::vector<std::shared_ptr<Worker>> workers;
	Director* director;
	Restaurant();
	Restaurant(int coord_x, int coord_y, int size, int jobs, std::string _name);
	std::string get_name() {
		return name;
	}
	void set_name(std::string _name) {
		name = _name;
	}
	Director* get_director() {
		return director;
	}
	void set_director(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email, int sal) {
		delete director;
		director = new Director(_age, _phone_number, _name, _surname, _email, sal);
	}
	void set_director() {
		delete director;
		director = new Director();
	}
	friend std::ostream& operator<< (std::ostream& out, const Restaurant& c);
	void new_worker() {
		workers.push_back(std::shared_ptr<Worker>(new Worker));
	}
	void new_worker(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email, int sal) {
		workers.push_back(std::shared_ptr<Worker>(new Worker(_age, _phone_number, _name, _surname, _email, sal)));
	}
};
std::ostream& operator<< (std::ostream& out, const Restaurant& c);

#endif
