#include "SignInUI.h"
#include "SignIn.h"
#include <string>
#include <iostream>

using namespace std;

void SignInUI::showHomeScreen(string userID, string password){
  cout<<"> "<<userID<<" "<<password<<endl;
}

void SignInUI::requestSignIn(string userID, string password){
  if(SignIn::verifyAccount(userID, password))
    showHomeScreen(userID, password);
}