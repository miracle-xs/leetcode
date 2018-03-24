// score1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	while (1) {
		int m = 0;
		int sum = 0;
		for(int i = 0; i < 6; i++) {
			cout << i+1 << ": ";
			cin >> m;
			sum += m;
		}
		cout << "总成绩" << sum << endl;
	}
    return 0;
}

