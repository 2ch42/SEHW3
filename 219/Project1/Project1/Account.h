#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 시스템의 사용 권한이 있는 일반회원, 회사회원의 Super class인 Entity class
class Account{
  private:
    string userID;              // 회원 ID
    string password;        // 회원 비밀번호
    static vector<Account*> accountList;        // 등록된 계정들의 참조값을 가지는 static vector 포인터 배열
    static Account* nowActiveAccount;           // 현재 로그인 중인 계정에 대한 참조값을 가지는 static 포인터 변수
  public:
    Account(string userID, string password);        // 생성자
    string getUserID(); 
    string getPassword();
    virtual string getActiveName();     // 현재 로그인 중인 계정에 대한 이름 정보를 반환하는 함수. sub class에서 함수 재정의를 위해 virtual로 선언.
    virtual string getActiveNum();      // 현재 로그인 중인 계정에 대한 번호 정보를 반환하는 함수. sub class에서 함수 재정의를 위해 virtual로 선언.
    virtual string getActiveID();           // 현재 로그인 중인 계정에 대한 ID 정보를 반환하는 함수. sub class에서 함수 재정의를 위해 virtual로 선언.
    static void addAccount(Account* newAccount);    // 회원 가입 시, 새로운 계정을 생성하는 static 함수.
    static bool signIn(string userID, string password);     // 로그인 시, 계정 확인 및 로그인을 진행하는 static 함수.
    static Account* getActiveAccount();     // 현재 로그인 중인 계정의 참조값을 반환하는 함수.
    static string deleteAccount();      // 회원 탈퇴 시, 현재 로그인 중인 계정을 삭제하는 함수.
    static string signOut();        // 로그아웃 시, 현재 로그인 중인 계정을 NULL로 설정 후 로그아웃된 계정의 ID를 반환하는 함수.
};