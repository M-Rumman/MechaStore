#ifndef CARTITEM_H
#define CARTITEM_H
#include "Component.h"
using namespace std;

class CartItem {
    Component component;
    int quantity;
public:
    CartItem();
    CartItem(const Component& component, int quantity);

    // Getters
    const Component& getComponent() const;
    int getQuantity() const;

    // Setters
    void setQuantity(int quantity);

    double getTotal() const;
};
#endif

