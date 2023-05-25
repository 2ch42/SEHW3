#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// �ý����� ��� ������ �ִ� �Ϲ�ȸ��, ȸ��ȸ���� Super class�� Entity class
class Account{
  private:
    string userID;              // ȸ�� ID
    string password;        // ȸ�� ��й�ȣ
    static vector<Account*> accountList;        // ��ϵ� �������� �������� ������ static vector ������ �迭
    static Account* nowActiveAccount;           // ���� �α��� ���� ������ ���� �������� ������ static ������ ����
  public:
    Account(string userID, string password);        // ������
    string getUserID(); 
    string getPassword();
    virtual string getActiveName();     // ���� �α��� ���� ������ ���� �̸� ������ ��ȯ�ϴ� �Լ�. sub class���� �Լ� �����Ǹ� ���� virtual�� ����.
    virtual string getActiveNum();      // ���� �α��� ���� ������ ���� ��ȣ ������ ��ȯ�ϴ� �Լ�. sub class���� �Լ� �����Ǹ� ���� virtual�� ����.
    virtual string getActiveID();           // ���� �α��� ���� ������ ���� ID ������ ��ȯ�ϴ� �Լ�. sub class���� �Լ� �����Ǹ� ���� virtual�� ����.
    static void addAccount(Account* newAccount);    // ȸ�� ���� ��, ���ο� ������ �����ϴ� static �Լ�.
    static bool signIn(string userID, string password);     // �α��� ��, ���� Ȯ�� �� �α����� �����ϴ� static �Լ�.
    static Account* getActiveAccount();     // ���� �α��� ���� ������ �������� ��ȯ�ϴ� �Լ�.
    static string deleteAccount();      // ȸ�� Ż�� ��, ���� �α��� ���� ������ �����ϴ� �Լ�.
    static string signOut();        // �α׾ƿ� ��, ���� �α��� ���� ������ NULL�� ���� �� �α׾ƿ��� ������ ID�� ��ȯ�ϴ� �Լ�.
};