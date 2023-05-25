#include <iostream>
#include <string>
#include <fstream>
#include "SignUp.h"
#include "SignIn.h"
#include "Account.h"
#include "DeleteAccount.h"
#include "SignOut.h"

#define MAX_STRING 32
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


  while(!is_program_exit){
    // 입력 파일에서 메뉴 숫자 2개를 읽기
    cout<<"메뉴 2개 입력>> ";
    cin>>menu_level_1>>menu_level_2;

    switch(menu_level_1){
      case 1:{
        switch(menu_level_2){
          case 1:{
            int typeNum;
            string a, b, c, d;
            cin>>typeNum>>a>>b>>c>>d;
            signUpUI.requestSignUp(typeNum, a, b, c, d);
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

 /*  FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
  FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+"); */

  doTask();

  return 0;
}
