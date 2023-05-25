#include "SignOut.h"
#include "Account.h"

using namespace std;

string SignOut::disconnectAccount(){
  string userID = Account::signOut();
  return userID;
}

void SignOutUI::requestSignOut(){
  string userID = SignOut::disconnectAccount();
  cout<<"> " + userID<<endl;
}