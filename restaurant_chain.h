#ifndef restaurant_chain_h
#define restaurant_chain_h

#include"cluster.h"
#include"ceo.h"

typedef std::shared_ptr<Cluster> SCluster;
class CEO;

class RestaurantChain
{
public:
	CEO* ceo;
	std::vector<SCluster> clusters;
	std::string name;
	RestaurantChain();
	RestaurantChain(std::string _name);
	void new_cluster(std::string region_name);
	void new_cluster();
	void set_ceo(int _age, int _phone_number, std::string _name, std::string _surname, std::string _email, int sal);
	SCluster get_cluster(std::string region_name);
	friend std::ostream& operator<< (std::ostream& out, const RestaurantChain& c);
	CEO* get_CEO() { return ceo; }

};
std::ostream& operator<< (std::ostream& out, const RestaurantChain& c);

#endif