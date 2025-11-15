import json
from datetime import datetime

# Load components
with open('../data/components.json', 'r') as f:
    components = json.load(f)

# Load orders
with open('../data/orders.json', 'r') as f:
    orders = json.load(f)

print("Welcome to ComponentsPortal!")
print("Available components:")

for comp in components:
    print(f"{comp['id']}: {comp['name']} - {comp['desc']} (${comp['price']}) Stock: {comp['stock']}")

# Simulate a customer adding one item to cart
component_id = int(input("Enter the ID of the component you want to buy: "))
qty = int(input("Enter quantity: "))
whatsapp = input("Enter your WhatsApp number: ")

# Find the component
selected = next((c for c in components if c['id'] == component_id), None)
if selected:
    total = selected['price'] * qty
    order = {
        "id": len(orders) + 1,
        "user": "test_user",
        "customerWhatsapp": whatsapp,
        "items": [{"id": selected['id'], "name": selected['name'], "qty": qty, "seller": selected['seller']['name']}],
        "total": total,
        "createdAt": str(datetime.now())
    }
    orders.append(order)
    
    # Save order
    with open('../data/orders.json', 'w') as f:
        json.dump(orders, f, indent=2)

    print(f"Order placed! Total: ${total}. Admin will see your WhatsApp to connect with seller.")
else:
    print("Invalid component ID.")
