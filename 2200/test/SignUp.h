#pragma once
#include <iostream>
#include <string>


using namespace std;

// 회원가입 기능에 대한 Boundary class
class SignUpUI{
  public:
    void requestSignUp(int typeNum, string name, string num, string userID, string password);
};

// 회원가입 기능에 대한 Control class
class SignUp{
  public:
    static void createNewAccount(int typeNum, string name, string num, string userID, string password);
};
