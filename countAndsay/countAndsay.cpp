// countAndsay.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

string countAndSay(int n) {
	string output,str;
	if (n == 1) {
		return "1";
	}
	str = countAndSay(n - 1);

	int count = 1;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == str[i + 1])
			count++;
		else {
			output = output + static_cast<char>(count + '0') + str[i];
			count = 1;
		}
	}
	return output;
}

int main()
{
	cout << countAndSay(6);
    return 0;
}

