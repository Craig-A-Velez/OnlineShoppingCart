#pragma once
#include <string>
#include <vector>
using namespace std;

class Customer {

public:
	Customer();
	void SetID(int customerIndex);
	void SetName(string setName);
	void SetEmail(string setEmail);
	void AddOrder(int orderNumber);
	string GetName() const;
	string GetEmail() const;
	int GetID() const;
	vector<int> GetOrderHistory();

private:
	int customerID;
	string customerName;
	string customerEmail;
	vector<int> orderHistory; // Need to figure out how to handle order history
};
