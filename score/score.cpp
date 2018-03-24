// score.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a1, a2, a3, a4, a5;
	while (1) {
		cout << "实验原理：" ;
		cin >> a1;
		while (a1 > 30) {
			cout << "error" <<"重新输入"<< endl;
			cin >> a1;
		}
		cout << "程序设计：" ;
		cin >> a2;
		while (a2 > 20) {
			cout << "error" << "重新输入" << endl;
			cin >> a2;
		}
		cout << "硬件验证结果：" ;
		cin >> a3;
		while (a3 > 20) {
			cout << "error" << "重新输入" << endl;
			cin >> a3;
		}
		cout << "心得体会：" ;
		cin >> a4;
		while (a4 > 15) {
			cout << "error" << "重新输入" << endl;
			cin >> a4;
		}
		cout << "报告格式：" ;
		cin >> a5;
		while (a5 > 15) {
			cout << "error" << "重新输入" << endl;
			cin >> a5;
		}
		cout << "总成绩：" << a1 + a2 + a3 + a4 + a5 << endl;
	}
	return 0;
}

