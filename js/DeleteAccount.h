#include <iostream>
#include <string>
#include "Account.h"

//È¸¿ø Å»Åð ±â´É¿¡ ´ëÇÑ Boundary class
class DeleteAccountUI{
  public:
    void requestDelete();
};

//È¸¿ø Å»Åð ±â´É¿¡ ´ëÇÑ Control class
class DeleteAccount{
  public:
    static string removeAccount();
};
