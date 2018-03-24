// Interview_56.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int FindNumberAppearingOnce(int numbers[], int length);
int main()
{
	int numbers[] = { 2,1,2,2,3,3,3 };
	FindNumberAppearingOnce(numbers, 7);
    return 0;
}

int FindNumberAppearingOnce(int numbers[], int length) {
	if (numbers == nullptr || length < 0)
		throw new exception("Invalid input");
	int bitSum[32] = { 0 };
	for (int i = 0; i < length; i++) {
		int bitMask = 1;
		for (int j = 31; j >= 0; j--) {
			int bit = numbers[i] & bitMask;
			if (bit != 0)
				bitSum[j] += 1;
			bitMask = bitMask << 1;
		}
	}

	int result = 0;
	for (int i = 0; i < 32; ++i) {
		result = result << 1;
		result += bitSum[i] % 3;
	}
	return result;
}