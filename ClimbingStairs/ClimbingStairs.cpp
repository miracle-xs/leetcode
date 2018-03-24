// ClimbingStairs.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int climbStairs(int n);

int main()
{
	cout << climbStairs(50);
    return 0;
}

int climbStairs(int n) {
	int fn, fn1, fn2;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	fn1 = 2;
	fn2 = 1;
	for (int i = 3; i <= n; i++) {
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
	}
	return fn;
}
