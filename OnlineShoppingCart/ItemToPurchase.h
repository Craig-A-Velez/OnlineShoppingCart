#pragma once
#include <string>
using namespace std;

class ItemToPurchase {

	public:
		ItemToPurchase();
		void SetName(string setName);
		void SetPrice(int setPrice);
		void SetQuantity(int setQuantity);
		string GetName() const;
		int GetPrice() const;
		int GetQuantity() const;

	private:
		string itemName;
		int itemPrice;
		int itemQuantity;
};
