#include "Order.h"

// Default constructor
Order::Order()
    : id(0), userId(0), total(0.0), customerWhatsapp("") {}

// Calculate total price by summing price * quantity of all items
double Order::calculateTotal() const {
    double sum = 0.0;
    for (const auto& item : items) {
        sum += item.getPrice() * item.getQuantity();
    }
    return sum;
}

// Getters
int Order::getId() const {
    return id;
}

int Order::getUserId() const {
    return userId;
}

vector<OrderItem> Order::getItems() const {
    return items;
}

double Order::getTotal() const {
    return total;
}

string Order::getCustomerWhatsapp() const {
    return customerWhatsapp;
}
