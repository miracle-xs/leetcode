// AddBinary.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	string a, b;
	a = "11";
	b = "1";
	int m = a.size();
	int n = b.size();
	if (m > n) {
		
	}
	if (m < n) {
		for (int i = 0; i < n - m; i++)
			a[i] = '0';
	}
	string sum="00";
	for (int i = 0; i <2 ; i++)
	{
		sum[i] += a[i]-'0' + b[i]-'0';
	}
	
	cout << sum << endl;

//	cout << sum << endl;

	
    return 0;
}

