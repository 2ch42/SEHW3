#include "GeneralAccount.h"

GeneralAccount::GeneralAccount(string name, string regNum, string userID, string password) : Account(userID, password){
  this->name = name;
  this->regNum = regNum;

  cout<<"2 " + name + " " + regNum + " " + userID + " " + password<<endl;
}

string GeneralAccount::getName(){
  return this->name;
}

string GeneralAccount::getRegNum(){
  return this->regNum;
}

/* string GeneralAccount::getActiveName(){
  return this->name;
}

string GeneralAccount::getActiveNum(){
  return this->regNum;
}

string GeneralAccount::getActiveID(){
  return getUserID();
}

string GeneralAccount::getActivePW(){
  return getPassword();
} */