#include <iostream>
#include <string>
#include "Account.h"

//ȸ�� Ż�� ��ɿ� ���� Boundary class
class DeleteAccountUI{
  public:
    void requestDelete();
};

//ȸ�� Ż�� ��ɿ� ���� Control class
class DeleteAccount{
  public:
    static string removeAccount();
};
