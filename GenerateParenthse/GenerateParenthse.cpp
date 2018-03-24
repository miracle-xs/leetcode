// GenerateParenthse.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<string> generateParenthesis(int n);
static void backtrack(vector<string>& res, string subStr, int left, int right);

int main()
{
	generateParenthesis(1);
    return 0;
}

vector<string> generateParenthesis(int n) {
	vector<string> res;
	backtrack(res, "", n, n);
	return res;
}

static void backtrack(vector<string>& res, string subStr, int left, int right) {
	if (left == 0 && right == 0) {
		res.push_back(subStr);
		return;
	}
	if (left > right) {
		return;
	}
	if (left > 0) {
		backtrack(res, subStr + "(", left - 1, right);
	}
	if (right > 0) {
		backtrack(res, subStr + ")", left, right - 1);
	}
}
