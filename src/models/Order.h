#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "OrderItem.h"

using namespace std;

class Order {
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

    // (Optional: Add setters if needed)
};

#endif

