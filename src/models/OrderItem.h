#ifndef ORDERITEM_H
#define ORDERITEM_H

#include <string>
using namespace std;

class OrderItem {
    int componentId;
    string componentName;
    int quantity;
    double price;
public:
    OrderItem();
    OrderItem(int id, const string& name, int qty, double price);

    // Getters
    int getComponentId() const;
    string getComponentName() const;
    int getQuantity() const;
    double getPrice() const;

    // Setters
    void setComponentId(int id);
    void setComponentName(const string& name);
    void setQuantity(int qty);
    void setPrice(double price);
};

#endif

