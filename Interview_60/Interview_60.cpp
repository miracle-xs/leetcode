// Interview_60.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void PrintProbability(int number);
void probability(int number, int *pProbabilities);
void probabilityCore(int original, int current, int sum, int *pProbabilities);
int g_maxValue = 6;
int main()
{
	PrintProbability(3);
    return 0;
}
void PrintProbability(int number) {
	if (number < 1)
		return;

	int maxSum = number*g_maxValue;
	int *pProbabilities = new int[maxSum - number + 1];
	for (int i = number; i <= maxSum; i++) {
		pProbabilities[i - number] = 0;
	}

	probability(number, pProbabilities);
	int total = pow((double)g_maxValue, number);
	for (int i = number; i <= maxSum; i++) {
		double ratio = (double)pProbabilities[i - number] / total;
		cout << ratio << endl;
	}
	delete[] pProbabilities;
}
void probability(int number, int *pProbabilities) {
	for (int i = 1; i <= g_maxValue; i++) {
		probabilityCore(number, number, i, pProbabilities);
	}
}
void probabilityCore(int original, int current,int sum,int *pProbabilities) {
	if (current == 1) {
		pProbabilities[sum - original]++;
	}
	else {
		for (int i = 1; i < g_maxValue; i++) {
			probabilityCore(original, current - 1, i + sum, pProbabilities);
		}
	}
}
