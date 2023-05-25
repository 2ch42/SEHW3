#pragma once
#include <iostream>
#include <string>


using namespace std;


class SignUpUI{
  public:
    void selectMemberType();
    void requestSignUp(int typeNum, string name, string num, string userID, string password);
};

class SignUp{
  public:
    static void createNewAccount(int typeNum, string name, string num, string userID, string password);
};
