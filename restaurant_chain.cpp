#include "restaurant_chain.h"

RestaurantChain::RestaurantChain() {
	ceo = new CEO();
	name = "Doner";
}

RestaurantChain::RestaurantChain(std::string _name) {
	ceo = new CEO();
	name = _name;
}

void RestaurantChain::new_cluster(std::string region_name) {
	clusters.push_back(SCluster(new Cluster(region_name)));
}

void RestaurantChain::new_cluster() {
	clusters.push_back(SCluster(new Cluster()));
}

SCluster RestaurantChain::get_cluster(std::string region_name) {
	for (int i = 0; i < clusters.size(); i++) {
		if (clusters[i]->get_region_name() == region_name) {
			return clusters[i];
		}
	}
	return nullptr;
}

std::ostream& operator<< (std::ostream& out, const RestaurantChain& c) {
	out << "Restaurant chain name: " << c.name << "\nCEO: " << c.ceo->get_name() << " " << c.ceo->get_surname() << "\nClusters:\n";
	for (int i = 0; i < c.clusters.size(); i++) {
		out << c.clusters[i]->get_region_name() << "\n";
	}
	return out;
}

void RestaurantChain::set_ceo(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email, int sal) {
	ceo = new CEO(_age, _phone_number, _name, _surname, _email, sal);
}