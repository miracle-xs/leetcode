// Sqrtx.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

int mySqrt(int x);
int main()
{
	cout << mySqrt(8) << endl;
    return 0;
}

int mySqrt(int x) {
	double m = sqrt(x);
	int i = floor(m);
	return i;
}
