#pragma once
#include <iostream>
#include <string>

using namespace std;

class SignInUI{
  public:
    void showHomeScreen(string userID, string password);
    void requestSignIn(string userID, string password);
};