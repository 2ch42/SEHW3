#pragma once
#include <iostream>
#include "Account.h"

using namespace std;

// 시스템에 등록된 회원 중 일반 회원에 대한 Entity class
class GeneralAccount : public Account{
  private:
    string name;    // 이름
    string regNum;      // 주민번호
  public:
    GeneralAccount(string name, string regNum, string userID, string password);     // 생성자
    string getName(); 
    string getRegNum();
    virtual string getActiveName();         // 현재 로그인 된 계정의 이름을 반환하는 함수
    virtual string getActiveNum();          // 현재 로그인 된 계정의 주민번호를 반환하는 함수
    virtual string getActiveID();               // 현재 로그인 된 계정의 ID를 반환하는 함수
};