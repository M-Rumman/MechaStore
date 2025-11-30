#include "CartItem.h"

CartItem::CartItem() : component(), quantity(0) {}

CartItem::CartItem(const Component& component, int quantity)
    : component(component), quantity(quantity) {}

const Component& CartItem::getComponent() const {
    return component;
}

int CartItem::getQuantity() const {
    return quantity;
}

void CartItem::setQuantity(int quantity) {
    this->quantity = quantity;
}

double CartItem::getTotal() const {
    return component.getPrice() * quantity;
}
