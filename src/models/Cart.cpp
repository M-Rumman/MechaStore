#include "Cart.h"
#include <iostream>

Cart::Cart() {}

// Add item to the cart
void Cart::addItem(const Component &n, int qty) {
    // Check if item already exists
    for (auto &item : items) {
        if (item.getComponent().getId() == n.getId()) {
            // Increase quantity if already present
            item.setQuantity(item.getQuantity() + qty);
            return;
        }
    }

    // Add new CartItem if not found
    CartItem newItem(n, qty);
    items.push_back(newItem);
}

// Remove item by component ID
void Cart::removeItem(int componentId) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i].getComponent().getId() == componentId) {
            items.erase(items.begin() + i);
            return;
        }
    }
}

// Calculate total price of the cart
double Cart::getCartTotal() const {
    double total = 0.0;

    for (const auto &item : items) {
        total += item.getComponent().getPrice() * item.getQuantity();
    }

    return total;
}
