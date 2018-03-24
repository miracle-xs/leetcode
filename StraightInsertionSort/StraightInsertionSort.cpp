// StraightInsertionSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int test[5] = { 4,2,6,9,7 };
	for (int i = 1; i <= 5; i++) {
		if (test[i] < test[i - 1]) {
			int tmp = test[i];
			int j;
			for (j = i - 1; j>=0&&test[j] > tmp; j--)
				test[j + 1] = test[j];
			test[j + 1] = tmp;
		}
	}
    return 0;
}

