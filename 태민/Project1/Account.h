#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
	string userID;
	string password;
	static vector<Account*> accountList;
	static Account* nowActiveAccount;
public:
	Account(string userID, string password);
	string getUserID();
	string getPassword();
	static void addAccount(Account* newAccount);
	static bool signIn(string userID, string password);
	void activeAccount();
	static void deleteAccount();
	static void signOut();
	~Account();
};