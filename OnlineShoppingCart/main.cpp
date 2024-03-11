// OnlineShoppingCart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "ItemToPurchase.h"
#include "header.h"
#include "ShoppingCart.h"

using namespace std;

int main() {
    string customerName;
    string todayDate;
    vector<Coupon> allCoupons;
    Coupon CoupTwentyPercent("20PEROFF", "percent", 20);
    allCoupons.push_back(CoupTwentyPercent);
    
    cout << "Enter customer's name:" << endl;
    getline(cin, customerName);

    cout << "Enter today's date:" << endl;
    getline(cin, todayDate);

	cout << endl;
	cout << "Customer name: " << customerName << endl;
	cout << "Today's date: " << todayDate << endl;
    cout << endl;

    ShoppingCart currentCart(customerName, todayDate);
    PrintMenu(currentCart, allCoupons);

    return 0;
}
