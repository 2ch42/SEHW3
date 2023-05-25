#include "SignOutUI.h"
#include "SignOut.h"


void SignOutUI::requestSignOut(){
  SignOut::disconnectAccount();
}