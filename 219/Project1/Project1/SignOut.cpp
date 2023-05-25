#include "SignOut.h"
#include "Account.h"
#include "file.h"

using namespace std;

// 요청받은 로그아웃을 진행하는 함수를 호출하고 로그아웃을 진행한 후 로그아웃한 ID를 boundary class로 반환한다.
string SignOut::disconnectAccount(){
  string userID = Account::signOut();
  return userID;
}

// 사용자로부터 로그아웃 요청을 받아 로그아웃 결과를 화면에 출력한다.
void SignOutUI::requestSignOut(){
  string userID = SignOut::disconnectAccount();
  fprintf(out_fp, "2.2. signOut\n");
  fprintf(out_fp, "> %s\n", userID.c_str());
}