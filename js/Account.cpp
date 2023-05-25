#include "Account.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<Account*> Account::accountList(0, nullptr);
Account* Account::nowActiveAccount = NULL;

Account::Account(string userID, string password){
  this->userID = userID;
  this->password = password;
}

string Account::getUserID(){
  return this->userID;
}

string Account::getPassword(){
  return this->password;
}

bool Account::signIn(string userID, string password){
  for(int i=0; i<accountList.size(); i++){
    if(accountList[i]->getUserID() == userID && accountList[i]->getPassword() == password){
      nowActiveAccount = accountList[i];
      return true;
    }
  }
  return false;
}

void Account::addAccount(Account* newAccount){
  accountList.push_back(newAccount);
}

void Account::deleteAccount(){
  if(nowActiveAccount != NULL){
    delete nowActiveAccount;
    nowActiveAccount = NULL;
  }
}

string Account::signOut(){
  if(nowActiveAccount != NULL){
    string userID = nowActiveAccount->getUserID();
    nowActiveAccount = NULL;
    return userID;
  }
  return "";
}

string Account::getActiveName(){
  return nowActiveAccount->getActiveName();
}

string Account::getActiveNum(){
  return nowActiveAccount->getActiveNum();
}

Account::~Account(){
  cout<<"> " + this->userID<<endl;
}
