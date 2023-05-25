#include <iostream>
#include <string>
#include "Account.h"

//회원 탈퇴 기능에 대한 Boundary class
class DeleteAccountUI{
  public:
    void requestDelete();
};

//회원 탈퇴 기능에 대한 Control class
class DeleteAccount{
  public:
    static string removeAccount();
};
