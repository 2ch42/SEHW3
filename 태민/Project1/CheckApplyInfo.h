#pragma once
#include "Apply.h"


class CheckApplyInfo
{
private:

public:
	vector<Apply> showSortedApplyInfo();
	void sortbyCompanyName(vector<Apply>& applyList);
};


class CheckApplyInfoUI
{
private:
	CheckApplyInfo * app;

public:
	void accessApplyInfo();
};


