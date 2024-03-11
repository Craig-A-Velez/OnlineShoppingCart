/*#include <iostream>
#include <string>
#include <vector>
#include "ItemToPurchase.h"
#include "header.h"
#include "Customer.h"
#include "Order.h"

int ignore() {
    int itemQuantity = 2;
    int i;
    int totalCost = 0;

    vector<ItemToPurchase> itemList;

    // Prompt user for item information and push object to itemList.
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
    }

    // Prints Total cost for each itemList object and calculates total cost for all items.
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
*/