#include"restaurant_chain.h"

int main() {
	setlocale(LC_ALL, "Russian");
	//create RestaurantChain
	RestaurantChain rest("Doner");
	//create clustera\s
	rest.new_cluster("America");
	rest.new_cluster("Russia");
	//Set ceo
	rest.set_ceo(23, 8932535235, "Vova", "Car", "vovan@krutiu.tu", 100000000);
	//out rest
	std::cout << rest << "\n\n";
	//get cluster
	SCluster cluster = rest.get_cluster("Russia");
	//set head
	cluster->set_head(45, 892352532, "Kolyan", "Borziy", "alphach@bmw.rich", 450000);
	//add restaurant
	cluster->new_restaurant(234532, 2342, 50, 12, "Olimp");
	cluster->new_restaurant(3453345, 234542, 600, 90, "Hookan and Shawa");
	//out cluster
	std::cout << *cluster.get() << "\n\n";
	//get Restaurant
	SRestaurant r = cluster->get_restaurant("Olimp");
	//set Director
	r->set_director();
	//add workers
	r->new_worker();
	r->new_worker(8, 0, "Toha", "Melkiy", "nope", 0);
	//out restaurant
	std::cout << *r.get() << "\n\n";
	//get Director
	Director* dir = r->get_director();
	//out director
	std::cout << *dir;
}