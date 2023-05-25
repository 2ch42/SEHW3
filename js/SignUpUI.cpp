#include "SignUpUI.h"
#include "SignUp.h"
#include <iostream>

using namespace std;

/* void SignUpUI::selectMemberType(){
  int typeNum = 0;
  cin>>typeNum;
  SignUp::createNewAccount(typeNum);
} */

/* void SignUpUI::startInterface(){
  selectMemberType();
}
 */

void SignUpUI::requestSignUp(int typeNum, string name, string num, string userID, string password){
  SignUp::createNewAccount(typeNum, name, num, userID, password);
}