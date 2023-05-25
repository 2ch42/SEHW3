#include "CompanyAccount.h"

CompanyAccount::CompanyAccount(string companyName, string businessNum, string userID, string password) : Account(userID, password) {
	this->companyName = companyName;
	this->businessNum = businessNum;

	cout << "1 " + companyName + " " + businessNum + " " + userID + " " + password << endl;
}