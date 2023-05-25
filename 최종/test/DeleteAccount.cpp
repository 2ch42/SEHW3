#include "DeleteAccount.h"
#include "Account.h"

using namespace std;

void DeleteAccount::removeAccount(){
  Account::deleteAccount();
}

void DeleteAccountUI::requestDelete(){
  DeleteAccount::removeAccount();
}