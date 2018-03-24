// PlusOne.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
	vector<int> digits = { 9 };
	int result = 0;
	for (int i = 0; i < digits.size(); i++) {
		result += digits[i] * pow(10, digits.size() - i - 1);
	}
	vector<int> plusone;
	int ans = result+1;
	for (int i = 0; i < digits.size(); i++) {
		plusone.push_back(ans / pow(10, digits.size() - i-1));
		ans = ans%(int)pow(10, digits.size() - i-1);
	}
	cout << "["<<plusone[0]<<","<<plusone[1]<<"]" << endl;
	return 0;
}

//vector<int> PlueOne(vector<int>& digits) {
//
//}
