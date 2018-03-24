// Partition.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<algorithm>
using namespace std;

int RandomInRange(int x, int y);
int Partition(int data[], int length, int start, int end);
void QuickSort(int data[], int length, int start, int end);
int main()
{
	int data[] = { 3,4,8,5,2,9,11,6 };
	QuickSort(data, 8, 0, 7);
    return 0;
}

int Partition(int data[], int length, int start, int end) {
	if (data == nullptr || length <= 0 || start < 0 || end >= length)
		throw new exception("Invalid Parameters");

	int index = RandomInRange(start, end);
	swap(data[index], data[end]);

	int small = start - 1;
	for (index = start; index < end; index++) {
		if (data[index] < data[end]) {
			++small;
			if (small != index)
				swap(data[index], data[small]);
		}
	}

	++small;
	swap(data[small], data[end]);
	return small;
}

int RandomInRange(int x, int y) {
	srand((unsigned)time(NULL));
	return rand() % y  + x;
}

void QuickSort(int data[], int length, int start, int end) {
	if (start == end)
		return;
	
	int index = Partition(data, length, start, end);
	if (index > start)
		QuickSort(data, length, start, index - 1);
	if (index < end)
		QuickSort(data, length, index + 1, end);
}