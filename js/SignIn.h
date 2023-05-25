#pragma once
#include <string>

using namespace std;


class SignInUI{
  public:
    void showHomeScreen(string userID, string password);
    void requestSignIn(string userID, string password);
};
class SignIn{
  private:
    SignInUI signInUI;
  public:
    static bool verifyAccount(string userID, string password);
};
