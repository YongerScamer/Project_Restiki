#include "restaurant.h"
#include <random>

Restaurant::Restaurant() {
	coord_x = rand();
	coord_y = rand();
	size = 100;
	jobs = 10;
	name = "В гостях у армяней";
}

Restaurant::Restaurant(int _coord_x, int _coord_y, int _size, int _jobs, std::string _name) {
	coord_x = _coord_x;
	coord_y = _coord_y;
	size = _size;
	jobs = _jobs;
	name = _name;
}

std::ostream& operator<< (std::ostream& out, const Restaurant& c) {
	out << "Restaurant name: " << c.name << "\nDirector: \n" << *c.director << "\nWorkers:\n";
	for (int i = 0; i < c.workers.size(); i++) {
		out << c.workers[i]->get_name() << " " << c.workers[i]->get_surname() << "\n";
	}
	return out;
}