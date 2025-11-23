#ifndef ORDERITEM_H
#define ORDERITEM_H
#include<string>
using namespace std;


class OrderItem{
int componentId;
string componentName;
int quantity;
double price;
public:
OrderItem();
OrderItem(int id, string name, int qty, double price);


double getTotal() const { return quantity * price; }
bool operator<(const OrderItem &other) const { return price < other.price; }
friend ostream& operator<<(ostream &out, const OrderItem &item){
out << item.componentName << " x" << item.quantity << " = $" << item.getTotal();
return out;
}
};
#endif
