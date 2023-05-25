#include "Account.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<Account*> Account::accountList(0, nullptr);  // 등록된 계정들에 대한 참조값을 갖는 static vector 포인터 배열의 초기화
Account* Account::nowActiveAccount = NULL;      // 로그인 중인 계정의 참조값을 갖는 static 포인터 변수 초기화


// super class 생성자
Account::Account(string userID, string password){
  this->userID = userID;
  this->password = password;
}

string Account::getUserID(){
  return this->userID;
}

string Account::getPassword(){
  return this->password;
}

//로그인 시, 등록된 계정들의 참조값을 갖는 배열에서 등록된 계정이 맞는 지 확인 후 반환하는 함수.
bool Account::signIn(string userID, string password){
  for(int i=0; i<accountList.size(); i++){
    if(accountList[i]->getUserID() == userID && accountList[i]->getPassword() == password){
      nowActiveAccount = accountList[i];
      return true;
    }
  }
  return false;
}

// 회원 가입 시, 리스트에 새로 생성된 계정의 참조값 추가,
void Account::addAccount(Account* newAccount){
  accountList.push_back(newAccount);
}

// 회원 탈퇴 시, 로그인 중인 계정 정보 NULL 설정 후, 계정을 delete하는 함수.
 string Account::deleteAccount(){
  if(nowActiveAccount != NULL){
    string userID = nowActiveAccount->getActiveID();
    delete nowActiveAccount;
    nowActiveAccount = NULL;
    return userID;
  }
  return "Not logged in.";
}

 // 로그아웃시, 현재 로그인 중인 계정 정보를 NULL 설정하는 함수.
string Account::signOut(){
  if(nowActiveAccount != NULL){
    string userID = nowActiveAccount->getUserID();
    nowActiveAccount = NULL;
    return userID;
  }
  return "Not logged in.";
}

//로그인 중인 계쩡의 참조값 반환.
Account* Account::getActiveAccount(){
  return nowActiveAccount;
}

//로그인 중인 계정의 이름 정보 반환
string Account::getActiveName(){
  return "Not logged in.";
}

//로그인 중인 계정의 번호 정보 반환.
string Account::getActiveNum(){
  return "Not logged in.";
}

//로그인 중인 계정의 ID 정보 반환.
string Account::getActiveID(){
  if(nowActiveAccount != NULL)
   return this->userID;
  else
    return "";
}
