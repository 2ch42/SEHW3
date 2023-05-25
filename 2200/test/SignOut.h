#include <string>

using namespace std;

// 로그아웃 기능에 대한 Boundary class
class SignOutUI{
  public:
    void requestSignOut();
};

// 로그아웃 기능에 대한 Control class
class SignOut{
  public:
    static string disconnectAccount();
};
