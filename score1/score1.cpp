// score1.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "�ܳɼ�" << sum << endl;
	}
    return 0;
}

