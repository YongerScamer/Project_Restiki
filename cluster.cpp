#include "cluster.h"

Cluster::Cluster() {
	region_name = "NN";
	head = new HeadCluster();
}

Cluster::Cluster(std::string _region_name) {
	region_name = _region_name;
	head = new HeadCluster();
}

std::string Cluster::get_region_name() {
	return region_name;
}

void Cluster::set_region_name(std::string name) {
	region_name = name;
}

std::ostream& operator<< (std::ostream& out, const Cluster& c) {
	out << "Region: " << c.region_name << "\nHead: " << c.head->get_name() << " " << c.head->get_surname() << "\nRestaurants:\n";
	for (int i = 0; i < c.restaurants.size(); i++) {
		out << c.restaurants[i]->get_name() << "\n";
	}
	return out;
}

SRestaurant Cluster::get_restaurant(std::string name) {
	for (int i = 0; i < restaurants.size(); i++) {
		if (restaurants[i]->get_name() == name) {
			return restaurants[i];
		}
	}
	return nullptr;
}
void Cluster::set_head(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email, int sal) {
	this->head = new HeadCluster(_age, _phone_number, _name, _surname, _email, sal);
}