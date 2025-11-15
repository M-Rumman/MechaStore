#ifndef COMPONENTS_H
#define COMPONENTS_H

#include<string>
using namespace std;

class Component{
	int id;
	string name;
	string description;
	int quantity;
	double price;
	string sellerName;
	string sellerWhatsapp;
	public:
	Component();
    Component(int id, const string& name, const string& desc, int qty, double price,
			  const string& sellerName, const string& sellerWhatsapp);
    int getId() const;
	string getName() const;
	string getDescription() const;
	int getQuantity() const;
	double getPrice() const;
	string getSellerName() const;
	string getSellerWhatsapp() const;
    void setId(int id);
	void setName(const string& name);
	void setDescription(const string& description);
	void setQuantity(int quantity);
	void setPrice(double price);
	void setSellerName(const string& sellerName);
	void setSellerWhatsapp(const string& sellerWhatsapp);
};
#endif;
