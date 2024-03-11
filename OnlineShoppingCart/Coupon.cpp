#include "Coupon.h"

Coupon::Coupon() {
	coupCode = "none";
	coupType = "none";
	coupAmount = 0;
}

Coupon::Coupon(string code, string type, int amt) {
	coupCode = code;
	coupType = type; 
	coupAmount = amt;
}

void Coupon::SetCode(string code) {
	coupCode = code;
}

string Coupon::GetCode() {
	return coupCode;
}

void Coupon::SetType(string type) {
	coupType = type;
}

string Coupon::GetType() {
	return coupType; 
}

void Coupon::SetAmount(int amt) {
	coupAmount = amt; 
}

int Coupon::GetAmount() {
	return coupAmount; 
}