#include <iostream>
#include <string>
#include "SignUp.h"
#include "SignIn.h"
#include "Account.h"
#include "DeleteAccount.h"
#include "SignOut.h"
#include "file.h"

#define MAX_STRING 50
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


using namespace std;

void doTask(){
  int menu_level_1 = 0, menu_level_2 = 0;
  int is_program_exit = 0;

  SignUpUI signUpUI;
  SignInUI signInUI;
  DeleteAccountUI deleteAccountUI;
  SignOutUI signOutUI;

  Account* activeAccount;

  FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
  FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

  while(!is_program_exit){
    // 입력 파일에서 메뉴 숫자 2개를 읽기
    fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

    switch(menu_level_1){
      case 1:{
        switch(menu_level_2){
          case 1:{
            int typeNum;
            char name[MAX_STRING], num[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];
            fscanf(in_fp, "%d %s %s %s %s", &typeNum, name, num, id, pw);
            signUpUI.requestSignUp(typeNum, string(name), string(num), string(id), string(pw));
            break;
          }
          case 2:{
            deleteAccountUI.requestDelete();
            break;
          }
          default:{
            is_program_exit = 1;
            break;
          }
        }
        break;
      }
      case 2:{
        switch(menu_level_2){
          case 1:{
            string id, pw;
            cin>>id>>pw;
            signInUI.requestSignIn(id, pw);
            activeAccount = Account::getActiveAccount();
            break;
          }
          case 2:{
            signOutUI.requestSignOut();
            break;
          }
          default:{
            is_program_exit = 1;
            break;
          }
        }
      }
    }
  }
}

int main(){

  doTask();

  return 0;
}
