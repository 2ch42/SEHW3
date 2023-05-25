#include "CompanyAccount.h"

CompanyAccount::CompanyAccount(string companyName, string businessNum, string userID, string password) : Account(userID, password){
  this->companyName = companyName;
  this->businessNum = businessNum;
}

string CompanyAccount::getCompanyName(){
  return companyName;
}

string CompanyAccount::getBusinessNum(){
  return businessNum;
}

string CompanyAccount::getActiveName(){
  return companyName;
}

string CompanyAccount::getActiveNum(){
  return businessNum;
}