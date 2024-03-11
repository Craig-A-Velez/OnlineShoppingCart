#include "ItemToPurchase.h"
#include <iostream>

ItemToPurchase::ItemToPurchase() {
	itemName = "none";
	itemDescription = "none";
	itemPrice = 0;
	itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string iName, string iDesc, int iPrice, int iQuantity) {
	itemName = iName;
	itemDescription = iDesc;
	itemPrice = iPrice;
	itemQuantity = iQuantity;
}

void ItemToPurchase::SetName(string setName) { 
	itemName = setName;
}

string ItemToPurchase::GetName() const {
	return itemName;
}

void ItemToPurchase::SetDescription(string setDescription) {
	itemDescription = setDescription;
}

string ItemToPurchase::GetDescription() const {
	return itemDescription;
}

void ItemToPurchase::SetPrice(int setPrice) { 
	itemPrice = setPrice;
}

int ItemToPurchase::GetPrice() const {
	return itemPrice;
}
void ItemToPurchase::SetQuantity(int setQuantity) { 
	itemQuantity = setQuantity;
}

int ItemToPurchase::GetQuantity() const{ 
	return itemQuantity;
}

void ItemToPurchase::PrintItemCost() const {
	cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity * itemPrice) << endl;
}

void ItemToPurchase::PrintItemDescription() const {
	cout << itemName << ": " << itemDescription << endl;
}