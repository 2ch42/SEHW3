#include <string>

using namespace std;

// �α׾ƿ� ��ɿ� ���� Boundary class
class SignOutUI{
  public:
    void requestSignOut();
};

// �α׾ƿ� ��ɿ� ���� Control class
class SignOut{
  public:
    static string disconnectAccount();
};
