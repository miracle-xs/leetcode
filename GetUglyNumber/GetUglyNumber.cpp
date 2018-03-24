// GetUglyNumber.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
    return 0;
}

int GetUglyNumber(int index) {
	if (index <= 0)
		return 0;

	int *pUglyNumbers = new int[index];
	pUglyNumbers[0] = 1;
	int nextUglyindex = 1;

	int *pMultiply2 = pUglyNumbers;
	int *pMultiply3 = pUglyNumbers;
	int *pMultiply5 = pUglyNumbers;

	while (nextUglyindex < index) {
		int min = Min(*pMultiply2 * 2, *pMultiply3 * 3, *pMultiply5 * 5);
		pUglyNumbers[nextUglyindex] = min;

		while (*pMultiply2 * 2 <= pUglyNumbers[nextUglyindex])
			++pMultiply2;
		while (*pMultiply3 * 3 <= pUglyNumbers[nextUglyindex])
			++pMultiply3;
		while (*pMultiply5 * 5 <= pUglyNumbers[nextUglyindex])
			++pMultiply5;

		++nextUglyindex;
	}
	int ugly = pUglyNumbers[nextUglyindex - 1];
	delete[] pUglyNumbers;
	return ugly;
}

int Min(int numbers1, int numbers2, int numbers3) {
	int min = (numbers1 < numbers2) ? numbers1 : numbers2;
	min = (min < numbers3) ? min : numbers3;

	return min;
}