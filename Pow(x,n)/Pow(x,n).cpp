// Pow(x,n).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

double myPow(double x, int n);
double fastPow(double x, long long n);

int main()
{
	cout << myPow(1, -2147483648) << endl;
    return 0;
}

//double myPow(double x, int n) {
//	if (n < 0) {
//		long long N = n;
//		return myPow(1 / x, -N);
//	}
//	if (n == 0)
//		return 1;
//	else {
//		double m = myPow(x, n / 2);
//		if (n % 2 == 0)
//			return m*m;
//		else
//			return x*m*m;
//	}
//}
double fastPow(double x, long long n) {
	if (n == 0) {
		return 1.0;
	}
	double half = fastPow(x, n / 2);
	if (n % 2 == 0) {
		return half * half;
	}
	else {
		return half * half * x;
	}
}
double myPow(double x, int n) {
	long long N = n;
	if (N < 0) {
		x = 1 / x;
		N = -N;
	}
	return fastPow(x, N);
}