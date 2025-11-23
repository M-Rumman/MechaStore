#ifndef ORDER_H
#define ORDER_H


#include <string>
#include <vector>
#include "OrderItem.h"
using namespace std;


class Order{
int id;
int userId;
vector<OrderItem> items;
double total;
string customerWhatsapp;
public:
Order();
double calculateTotal() const;
int getId() const;
int getUserId() const;
vector<OrderItem> getItems() const;
double getTotal() const;
string getCustomerWhatsapp() const;


// Operator overloading
bool operator<(const Order &other) const { return total < other.total; }
friend ostream& operator<<(ostream &out, const Order &o){
out << "Order#" << o.id << ", User: " << o.userId << ", Total: $" << o.total;
return out;
}
};
#endif
