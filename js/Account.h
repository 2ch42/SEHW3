#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account{
  private:
    string userID;
    string password;
    static vector<Account*> accountList;
    static Account* nowActiveAccount;
  public:
    Account(string userID, string password);
    string getUserID();
    string getPassword();
    virtual string getActiveName();
    virtual string getActiveNum();
    virtual string getActiveID();
    static void addAccount(Account* newAccount);
    static bool signIn(string userID, string password);
    static Account* getActiveAccount();
    static void deleteAccount();
    static string signOut();
    ~Account();
};