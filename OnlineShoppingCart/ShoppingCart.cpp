#include "ShoppingCart.h"
#include <vector>
#include <iostream>

ShoppingCart::ShoppingCart() {
	customerName = "none";
	currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string custName, string cartDate) {
	customerName = custName;
	currentDate = cartDate;
}

string ShoppingCart::GetCustomerName() const {
	return customerName;
}

string ShoppingCart::GetDate() const {
	return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase newItem) {
	cartItems.push_back(newItem);
}

void ShoppingCart::RemoveItem(string itemName) {
	int itemNum = cartItems.size();
	bool itemFound = false;
	int i;
	ItemToPurchase currItem;

	for (i = 0; i < itemNum; i++) {
		currItem = cartItems.at(i);
		if (itemName == currItem.GetName()) {
			itemFound = true;
			cartItems.erase(cartItems.begin() + i); 
			itemNum = itemNum - 1;
			cout << "Removed Item: " << itemName << endl;
		}
	}

	if (itemFound == false) {
		cout << "Item not found in cart. Nothing removed." << endl;
	}
}

void ShoppingCart::ModifyItem(ItemToPurchase modItem) {
	int itemNum = cartItems.size(); 
	bool itemFound = false; 
	int i; 
	ItemToPurchase currItem; 

	for (i = 0; i < itemNum; i++) { 
		currItem = cartItems.at(i); 
		if (modItem.GetName() == currItem.GetName()) { 
			itemFound = true; 
			if (currItem.GetName() != "none" && currItem.GetDescription() != "none" && currItem.GetPrice() != 0 && currItem.GetQuantity() != 0) {
				int newQuant;
				cout << "Enter the new quantity:" << endl;
				cin >> newQuant;
				currItem.SetQuantity(newQuant);
				cartItems.at(i) = currItem;
			}
			cout << "Modified Quantity of: " << currItem.GetName() << endl; 
		}
	}

	if (itemFound == false) { 
		cout << "Item not found in cart. Nothing modified." << endl;
	}
}

int ShoppingCart::GetNumItemsInCart() const {
	return cartItems.size();
}

int ShoppingCart::GetCostOfCart() const {
	int itemNum = cartItems.size();
	ItemToPurchase currItem;
	int cartTotal = 0;
	int i;

	for (i = 0; i < itemNum; i++) {
		currItem = cartItems.at(i);
		cartTotal = cartTotal + (currItem.GetPrice() * currItem.GetQuantity());
	}

	return cartTotal;
}

void ShoppingCart::PrintTotal() {
	int itemNum = cartItems.size();
	ItemToPurchase currItem;
	double cartTotal = 0;
	int i;

	cout << customerName << "'s Shopping Cart - " << currentDate << endl;
	cout << "Number of Items: " << itemNum << endl;
	cout << "Coupon: " << appliedCoupon.GetCode() << endl;
	cout << endl;

	for (i = 0; i < itemNum; i++) {
		currItem = cartItems.at(i);
		currItem.PrintItemCost();
		cartTotal = cartTotal + (currItem.GetPrice() * currItem.GetQuantity());
	}

	cout << endl;
	cout << "Total: $" << cartTotal << endl; 

	if (appliedCoupon.GetCode() != "none") {
		cout << "Discount applied:" << appliedCoupon.GetAmount() << " " << appliedCoupon.GetType() << " off!" << endl;
		double discAmount = 0;
			if (appliedCoupon.GetType() == "percent") {
				discAmount = cartTotal * appliedCoupon.GetAmount() * 0.01;
			}
			else if (appliedCoupon.GetType() == "dollar") {
				discAmount = appliedCoupon.GetAmount();
			}
			cartTotal = cartTotal - discAmount; 
		cout << "Subtotal: $" << cartTotal << endl; 
	}
	

}

void ShoppingCart::PrintDescriptions() {
	int itemNum = cartItems.size();
	ItemToPurchase currItem;
	int i = 0;

	cout << customerName << "'s Shopping Cart - " << currentDate << endl;
	cout << endl;
	cout << "Item Descriptions" << endl;

	for (i = 0; i < itemNum; i++) {
		currItem = cartItems.at(i);
		currItem.PrintItemDescription();
	}
}

void ShoppingCart::ApplyCoupon(Coupon coupToApply) {
	appliedCoupon = coupToApply;
	cout << "Applied coupon: " << appliedCoupon.GetCode();
}

Coupon ShoppingCart::GetCoupon() {
	return appliedCoupon;
}