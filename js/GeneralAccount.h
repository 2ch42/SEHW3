pragma once
#include <iostream>
#include "Account.h"

using namespace std;

class GeneralAccount : public Account{
  private:
    string name;
    string regNum;
  public:
    GeneralAccount(string name, string regNum, string userID, string password);
    string getName();
    string getRegNum();
    virtual string getActiveName();
    virtual string getActiveNum();
};