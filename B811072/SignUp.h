#pragma once
#include <iostream>
#include "SignUpUI.h"
#include <string>


using namespace std;

class SignUp{
  public:
    static void createNewAccount(int typeNum, string name, string num, string userID, string password);
};
