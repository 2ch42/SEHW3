#include "SignOut.h"
#include "Account.h"

using namespace std;

void SignOut::disconnectAccount(){
  Account::signOut();
}

void SignOutUI::requestSignOut(){
  SignOut::disconnectAccount();
}