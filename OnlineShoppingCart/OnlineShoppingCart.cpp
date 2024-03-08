// OnlineShoppingCart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "ItemToPurchase.h"
#include "header.h"
using namespace std;

int main()
{
    int itemQuantity = 2;
    int i;
    int totalCost = 0;

    vector<ItemToPurchase> itemList;

    for (i = 1; i <= itemQuantity; i++) {
        ItemToPurchase currItem;
        string currName;
        int currPrice;
        int currQuantity;

        cout << "Item " << i << endl;
        cout << "Enter the item name:" << endl;
        getline(cin, currName);
        cout << "Enter the item price:" << endl;
        cin >> currPrice;
        cout << "Enter the item quantity:" << endl;
        cin >> currQuantity;
        cout << endl;
        cin.ignore();

        currItem.SetName(currName);
        currItem.SetPrice(currPrice);
        currItem.SetQuantity(currQuantity);

        itemList.push_back(currItem);
    }

    // Loop to test print all vector class objects.
    /*
    for (i = 0; i < itemList.size(); i++) {
        ItemToPurchase currItem = itemList.at(i);
        cout << "Name: " << currItem.GetName() << endl;
        cout << "Price: " << currItem.GetPrice() << endl;
        cout << "Quantity: " << currItem.GetQuantity() << endl;
        cout << endl;
    }*/
    
    cout << "TOTAL COST" << endl;
    for (i = 0; i < itemList.size(); i++) {
        ItemToPurchase currItem = itemList.at(i);
        totalCost = totalCost + (currItem.GetPrice() * currItem.GetQuantity());
        cout << currItem.GetName() << " " << currItem.GetQuantity() << " @ $" << currItem.GetPrice() << " = $" << (currItem.GetPrice() * currItem.GetQuantity()) << endl;
    }

    cout << endl;
    cout << "Total: $" << totalCost << endl;

    return 0;
}
