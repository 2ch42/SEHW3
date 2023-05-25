#include "SignIn.h"
#include "Account.h"
#include <string>
#include <iostream>
#include "file.h"

using namespace std;

// 입력받은 ID, PW를 통해 등록된 계정이 맞는지 확인 후 맞다면 true, 등록된 계정이 아니라면 false를 반환한다.
bool SignIn::verifyAccount(string userID, string password){
  if(Account::signIn(userID, password)){
    return true;
  }
  else return false;
}

// 로그인 후 결과를 화면에 출력한다.
void SignInUI::showHomeScreen(string userID, string password){
    fprintf("2.1. signIn\n");
    fprintf(out_fp, "%s %s %s\n", "> ", userID, password);
}

// 사용자로부터 ID와 PW를 입력 받아 로그인 요청을 한다.
void SignInUI::requestSignIn(string userID, string password){
  if(SignIn::verifyAccount(userID, password))
    showHomeScreen(userID, password);
}