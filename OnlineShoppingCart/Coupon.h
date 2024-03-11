#pragma once
#include <string>
using namespace std;

class Coupon
{
public:
	Coupon();
	Coupon(string code, string type, int amt);
	void SetCode(string code);
	void SetType(string type);
	void SetAmount(int amt);
	string GetCode(); 
	string GetType(); 
	int GetAmount(); 


private:
	string coupCode;
	string coupType;
	int coupAmount;
};

