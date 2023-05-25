#pragma once
#include "SignInUI.h"
#include <string>

using namespace std;

class SignIn{
  private:
    SignInUI signInUI;
  public:
    static bool verifyAccount(string userID, string password);
};