#include "SignIn.h"
#include "Account.h"
#include <string>
#include <iostream>
#include "file.h"

using namespace std;

// �Է¹��� ID, PW�� ���� ��ϵ� ������ �´��� Ȯ�� �� �´ٸ� true, ��ϵ� ������ �ƴ϶�� false�� ��ȯ�Ѵ�.
bool SignIn::verifyAccount(string userID, string password){
  if(Account::signIn(userID, password)){
    return true;
  }
  else return false;
}

// �α��� �� ����� ȭ�鿡 ����Ѵ�.
void SignInUI::showHomeScreen(string userID, string password){
    fprintf(out_fp, "2.1. signIn\n");
    fprintf(out_fp, "> %s %s\n", userID.c_str(), password.c_str());
}

// ����ڷκ��� ID�� PW�� �Է� �޾� �α��� ��û�� �Ѵ�.
void SignInUI::requestSignIn(string userID, string password){
  if(SignIn::verifyAccount(userID, password))
    showHomeScreen(userID, password);
}