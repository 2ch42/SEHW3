#pragma once
#include <iostream>
#include <string>


using namespace std;

// ȸ������ ��ɿ� ���� Boundary class
class SignUpUI{
  public:
    void requestSignUp(int typeNum, string name, string num, string userID, string password);
};

// ȸ������ ��ɿ� ���� Control class
class SignUp{
  public:
    static void createNewAccount(int typeNum, string name, string num, string userID, string password);
};
