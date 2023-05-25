#include "GeneralAccount.h"

// 일반회원 계정 생성자
GeneralAccount::GeneralAccount(string name, string regNum, string userID, string password) : Account(userID, password){
  this->name = name;
  this->regNum = regNum;
}

string GeneralAccount::getName(){
  return this->name;
}

string GeneralAccount::getRegNum(){
  return this->regNum;
}

// 로그인 된 일반회원 계정의 이름 정보를 반환
string GeneralAccount::getActiveName(){
  return this->name;
}

//로그인 된 일반회원 계정의 주민번호 정보를 반환
string GeneralAccount::getActiveNum(){
  return this->regNum;
}

//로그인 된 일반회원 계정의 ID 정보를 반환
string GeneralAccount::getActiveID(){
  return this->getUserID();
}
