#include "CompanyAccount.h"

// 회사 회원 계정에 대한 생성자
CompanyAccount::CompanyAccount(string companyName, string businessNum, string userID, string password) : Account(userID, password){
  this->companyName = companyName;
  this->businessNum = businessNum;
}

string CompanyAccount::getCompanyName(){
  return companyName;
}

string CompanyAccount::getBusinessNum(){
  return businessNum;
}

// 로그인 된 회사회원 계정의 회사이름 정보를 반환
string CompanyAccount::getActiveName(){
  return this->companyName;
}

// 로그인 된 회사회원 계정의 사업자번호를 반환
string CompanyAccount::getActiveNum(){
  return this->businessNum;
}

// 로그인 된 회사회원 계정의 ID 정보를 반환
string CompanyAccount::getActiveID(){
  return this->getUserID();
}
