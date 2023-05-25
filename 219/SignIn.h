#pragma once
#include <string>

using namespace std;

//로그인 기능에 대한 Boundary class
class SignInUI{
  public:
    void showHomeScreen(string userID, string password);
    void requestSignIn(string userID, string password);
};

// 로그인 기능에 대한 Control class
class SignIn{
  private:
    SignInUI signInUI;
  public:
    static bool verifyAccount(string userID, string password);
};
