#pragma once
#include <iostream>
#include "Account.h"

using namespace std;

// �ý��ۿ� ��ϵ� ȸ�� �� �Ϲ� ȸ���� ���� Entity class
class GeneralAccount : public Account{
  private:
    string name;    // �̸�
    string regNum;      // �ֹι�ȣ
  public:
    GeneralAccount(string name, string regNum, string userID, string password);     // ������
    string getName(); 
    string getRegNum();
    virtual string getActiveName();         // ���� �α��� �� ������ �̸��� ��ȯ�ϴ� �Լ�
    virtual string getActiveNum();          // ���� �α��� �� ������ �ֹι�ȣ�� ��ȯ�ϴ� �Լ�
    virtual string getActiveID();               // ���� �α��� �� ������ ID�� ��ȯ�ϴ� �Լ�
};