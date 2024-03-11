#include "Customer.h"

Customer::Customer() {
	customerID = 0;
	customerName = "None";
	customerEmail = "None";
}

void Customer::SetName(string custName) {
	customerName = custName;
}

string Customer::GetName() const{
	return customerName;
}

void Customer::SetEmail(string custEmail) {
	customerEmail = custEmail;
}

string Customer::GetEmail() const{
	return customerEmail;
}

void Customer::SetID(int customerIndex) {
	customerID = 1000000 + customerIndex;
}

int Customer::GetID() const{
	return customerID;
}

void Customer::AddOrder(int orderNumber) {
	orderHistory.push_back(orderNumber);
}



vector<int> Customer::GetOrderHistory() {
	return orderHistory;
}