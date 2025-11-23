#ifndef CART_H
#define CART_H
#include "Component.h"
#include "CartItem.h"
#include <vector>
using namespace std;


class Cart{
vector<CartItem> items;
public:
Cart();
void addItem(const Component &n, int qty);
void removeItem(int componentId);
double getCartTotal() const;


// Sorting example
void sortItemsByPrice();
};
#endif
