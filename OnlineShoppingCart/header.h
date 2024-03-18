#pragma once
#include <iostream>
#include <string>
#include "ShoppingCart.h"

using namespace std;

// Create new object of class ItemToPurchase and return class object
ItemToPurchase newItem() {
	ItemToPurchase currItem;
	string currName;
	string currDescription;
	int currPrice;
	int currQuantity;

	cout << "Enter the item name:" << endl;
	cin.ignore(256, '\n');
	getline(cin, currName);
	cout << "Enter the item description:" << endl;
	getline(cin, currDescription);
	cout << "Enter the item price:" << endl;
	cin >> currPrice;
	cout << "Enter the item quantity:" << endl;
	cin >> currQuantity;

	currItem.SetName(currName);
	currItem.SetDescription(currDescription);
	currItem.SetPrice(currPrice);
	currItem.SetQuantity(currQuantity);

	return currItem;
}

// Returns Coupon class object from vector based on coupon code element
Coupon FindCouponByCode(string codeToFind, vector<Coupon> coupVector) {
	int i;
	int coupNum = coupVector.size();
	bool coupFound = false;
	Coupon currCoupon;

	for (i = 0; i < coupNum; i++) {
		currCoupon = coupVector.at(i);
		if (codeToFind == currCoupon.GetCode()) {
			coupFound = true;
			return currCoupon;
		}

	}


}

// Prints menu and handles menu commands based on user input.
void PrintMenu(ShoppingCart shopCart, vector<Coupon> coupVector) {
	string userCommand;

	// User command handler. Will not trigger on first occurance since userCommand string is not set.
	while (userCommand != "q") {

		if (userCommand == "a") {
			cout << "ADD ITEM TO CART" << endl;
			shopCart.AddItem(newItem());

		}
		else if (userCommand == "d") {
			cout << "REMOVE ITEM FROM CART" << endl;
			string itemToRemove;
			cout << "Type name of item to remove:" << endl;
			cin.ignore(256, '\n');
			getline(cin, itemToRemove);
			shopCart.RemoveItem(itemToRemove);
		}
		else if (userCommand == "c") {
			cout << "CHANGE ITEM QUANTITY" << endl;
			ItemToPurchase changeItem;
			string changeName;
			cout << "Type name of item to change quantity:" << endl;
			cin.ignore(256, '\n');
			getline(cin, changeName);
			changeItem.SetName(changeName);
			shopCart.ModifyItem(changeItem);

		}
		else if (userCommand == "i") {
			cout << "OUTPUT ITEM DESCRIPTIONS" << endl;
			shopCart.PrintDescriptions();
		}
		else if (userCommand == "o") {
			cout << "OUTPUT SHOPPING CART" << endl;
			shopCart.PrintTotal();
		}
		else if (userCommand == "v") {
			string codeText;
			cout << "Enter coupon code:" << endl;
			cin >> codeText;
			shopCart.ApplyCoupon(FindCouponByCode(codeText, coupVector));

		}

		// Moved menu character-out within while loop to print prior to each prompt.
		cout << endl;
		cout << "MENU" << endl;
		cout << "a - Add item to cart" << endl;
		cout << "d - Remove item from cart" << endl;
		cout << "c - Change item quantity" << endl;
		cout << "i - Output items' descriptions" << endl;
		cout << "o - Output shopping cart" << endl;
		cout << "v - Apply coupon code to shopping cart" << endl;
		cout << "q - Quit" << endl;

		cout << endl;
		cout << "Choose an option: ";
		cin >> userCommand;
	}

}
