#include <iostream>
#include "SignUp.h"
#include "CompanyAccount.h"
#include "GeneralAccount.h"
#include "Account.h"
#include <string>
#include "file.h"

using namespace std;

//  ����ڰ� �Է��� ������ �Է� �޾�  �Ϲ� ȸ��orȸ�� ȸ�� ��ü �����Ѵ�.
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

// ����ڷκ��� ������ �Է� �޾� ���ڸ� control class�� �����ϰ� ������ ������ �� ������ ȭ�鿡 ����Ѵ�.
void SignUpUI::requestSignUp(int typeNum, string name, string num, string userID, string password){
  SignUp::createNewAccount(typeNum, name, num, userID, password);
  fprintf(out_fp, "1.1. signUp\n");
  fprintf(out_fp, "%s %s %s %s %s\n", "> ", name.c_str(), num.c_str(), userID.c_str(), password.c_str());
}