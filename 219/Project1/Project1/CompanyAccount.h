#pragma once
#include <iostream>
#include "Account.h"

using namespace std;

// 시스템에 등록된 회원 중 회사 회원에 대한 Entity class
class CompanyAccount : public Account{
  private:
    string companyName; //회사이름
    string businessNum; //사업자번호
  public:
    CompanyAccount(string companyName, string businessNum, string userID, string password); // 생성자
    string getCompanyName();
    string getBusinessNum();
    virtual string getActiveName(); // 현재 로그인 중인 계정의 회사이름을 반환하는 함수
    virtual string getActiveNum();  // 현재 로그인 중인 계정의 사업자 번호를 반환하는 함수
    virtual string getActiveID();   // 현재 로그인 중인 계정의 ID를 반환하는 함수
};