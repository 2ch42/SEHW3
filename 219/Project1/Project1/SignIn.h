#pragma once
#include <string>

using namespace std;

//�α��� ��ɿ� ���� Boundary class
class SignInUI{
  public:
    void showHomeScreen(string userID, string password);
    void requestSignIn(string userID, string password);
};

// �α��� ��ɿ� ���� Control class
class SignIn{
  private:
    SignInUI signInUI;
  public:
    static bool verifyAccount(string userID, string password);
};
