#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
	itemName = "none";
	itemPrice = 0;
	itemQuantity = 0;
}

void ItemToPurchase::SetName(string setName) { 
	itemName = setName;
}

void ItemToPurchase::SetPrice(int setPrice) { 
	itemPrice = setPrice;
}

void ItemToPurchase::SetQuantity(int setQuantity) { 
	itemQuantity = setQuantity;
}

string ItemToPurchase::GetName() const{ 
	return itemName;
}

int ItemToPurchase::GetPrice() const{ 
	return itemPrice;
}

int ItemToPurchase::GetQuantity() const{ 
	return itemQuantity;
}