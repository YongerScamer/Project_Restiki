#ifndef cluster_h
#define cluster_h

#include"restaurant.h"
#include"head_cluster.h"

typedef std::shared_ptr<Restaurant> SRestaurant;
class HeadCluster;

class Cluster
{
protected:
	std::vector<SRestaurant> restaurants;
	std::string region_name;
	HeadCluster* head;
public:
	Cluster();
	Cluster(std::string _region_name);
	void set_head(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email, int sal);
	std::string get_region_name();
	void set_region_name(std::string name);
	friend std::ostream& operator<< (std::ostream& out, const Cluster& c);
	void new_restaurant() {
		restaurants.push_back(SRestaurant(new Restaurant));
	}
	void new_restaurant(int coord_x, int coord_y, int size, int jobs, std::string _name) {
		restaurants.push_back(SRestaurant(new Restaurant(coord_x, coord_y, size, jobs, _name)));
	}
	SRestaurant get_restaurant(std::string name);
};
std::ostream& operator<< (std::ostream& out, const Cluster& c);
typedef std::shared_ptr<Cluster> SCluster;
#endif

