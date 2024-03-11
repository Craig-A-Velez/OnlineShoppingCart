#pragma once
#include <string>
#include <vector>
#include "Coupon.h"
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {

	public:
		ShoppingCart();
		ShoppingCart(string customerName, string cartDate);
		string GetCustomerName() const;
		string GetDate() const;
		void AddItem(ItemToPurchase newItem);
		void RemoveItem(string itemName);
		void ModifyItem(ItemToPurchase modItem);
		int GetNumItemsInCart() const;
		int GetCostOfCart() const;
		void PrintTotal();
		void PrintDescriptions();
		void ApplyCoupon(Coupon coupToApply);
		Coupon GetCoupon();

	private:
		string customerName;
		string currentDate;
		vector<ItemToPurchase> cartItems;
		Coupon appliedCoupon;
};

