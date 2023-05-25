#include "DeleteAccount.h"
#include "Account.h"

using namespace std;

string DeleteAccount::removeAccount(){
  string userID = Account::deleteAccount();
  return userID;
}

void DeleteAccountUI::requestDelete(){
  string userID = DeleteAccount::removeAccount();
  cout<<"> "<<userID<<endl;
}