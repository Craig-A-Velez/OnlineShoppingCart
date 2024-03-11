#pragma once
#include <string>
using namespace std;

class ItemToPurchase {

	public:
		ItemToPurchase();
		ItemToPurchase(string iName, string iDesc, int iPrice, int iQuantity);
		void SetID(int itemIndex);
		void SetName(string setName);
		void SetDescription(string setDescription);
		void SetPrice(int setPrice);
		void SetQuantity(int setQuantity);

		int GetID() const;
		string GetName() const;
		string GetDescription() const;
		int GetPrice() const;
		int GetQuantity() const;

		void PrintItemCost() const;
		void PrintItemDescription() const;

	private:
		//int itemID;
		string itemName;
		string itemDescription;
		int itemPrice;
		int itemQuantity;
};
