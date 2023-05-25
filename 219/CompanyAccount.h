#pragma once
#include <iostream>
#include "Account.h"

using namespace std;

// �ý��ۿ� ��ϵ� ȸ�� �� ȸ�� ȸ���� ���� Entity class
class CompanyAccount : public Account{
  private:
    string companyName; //ȸ���̸�
    string businessNum; //����ڹ�ȣ
  public:
    CompanyAccount(string companyName, string businessNum, string userID, string password); // ������
    string getCompanyName();
    string getBusinessNum();
    virtual string getActiveName(); // ���� �α��� ���� ������ ȸ���̸��� ��ȯ�ϴ� �Լ�
    virtual string getActiveNum();  // ���� �α��� ���� ������ ����ڹ�ȣ�� ��ȯ�ϴ� �Լ�
    virtual string getActiveID();   // ���� �α��� ���� ������ ID�� ��ȯ�ϴ� �Լ�
};