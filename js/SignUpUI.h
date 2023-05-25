#pragma once
#include <iostream>

using namespace std;

class SignUpUI{
  public:
    void selectMemberType();
    void requestSignUp(int typeNum, string name, string num, string userID, string password);
};