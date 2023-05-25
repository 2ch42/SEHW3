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

void SignInUI::showHomeScreen(string userID, string password){
  cout<<"> "<<userID<<" "<<password<<endl;
}

void SignInUI::requestSignIn(string userID, string password){
  if(SignIn::verifyAccount(userID, password))
    showHomeScreen(userID, password);
}