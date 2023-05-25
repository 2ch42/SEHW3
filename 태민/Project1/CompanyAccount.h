#pragma once
#include <iostream>
#include "Account.h"

using namespace std;

class CompanyAccount : public Account {
private:
	string companyName;
	string businessNum;
public:
	CompanyAccount(string companyName, string businessNum, string userID, string password);
	string getCompanyName();
	string getBusinessNum();
};