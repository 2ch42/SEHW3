#include <iostream>
#include "SignUp.h"
#include "CompanyAccount.h"
#include "GeneralAccount.h"
#include "Account.h"
#include <string>
#include "file.h"

using namespace std;

//  사용자가 입력한 정보를 입력 받아 일반 회원or회사 회원 객체 생성한다.
void SignUp::createNewAccount(int typeNum, string name, string num, string userID, string password){
      if(typeNum == 1){
        string companyName = name;
        string businessNum = num;
        Account::addAccount(new CompanyAccount(companyName, businessNum, userID, password));
      }
      else{
        string userName = name;
        string regNum = num;
        Account::addAccount(new GeneralAccount(userName, regNum, userID, password));
      }
  
}

// 사용자로부터 정보를 입력 받아 인자를 control class에 전달하고 계정이 생성된 후 정보를 화면에 출력한다.
void SignUpUI::requestSignUp(int typeNum, string name, string num, string userID, string password){
  SignUp::createNewAccount(typeNum, name, num, userID, password);
  fprintf(out_fp, "1.1. signUp\n");
  fprintf(out_fp, "> %s %s %s %s\n", name.c_str(), num.c_str(), userID.c_str(), password.c_str());
}