#include "SignIn.h"
#include "Account.h"
#include <string>
#include <iostream>

using namespace std;


bool SignIn::verifyAccount(string userID, string password){
  if(Account::signIn(userID, password)){
    return true;
  }
  else return false;
}