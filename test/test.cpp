// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

#define ulong unsigned long 
#define uint unsigned long 
unsigned long Getproduct(ulong LastDate)
{
	ulong NewDate = 1;
	while (LastDate > 9 && NewDate != 0)
	{
		NewDate = NewDate * (LastDate % 10);
		LastDate = LastDate / 10;
	}
	NewDate = NewDate * LastDate; //最后一次乘积；
	return NewDate;
}

int main()
{
	//ulong InputDate, NewDate;
	//uint ProTimeF = 0;
	//scanf_s("%ld", &InputDate);
	//if (InputDate > 9)
	//{
	//	NewDate = Getproduct(InputDate);
	//	ProTimeF++;
	//	//		printf("第 %d 次结果为 %ld \n", ProTimeF, NewDate);
	//}
	//else
	//{
	//	printf("输入数据长为个位!自动返回\n");
	//	return -1;
	//}
	//while (NewDate>9)
	//{
	//	NewDate = Getproduct(NewDate);
	//	ProTimeF++;
	//	//		printf("第 %d 次结果为 %ld \n", ProTimeF, NewDate);
	//}
	//printf("%d", ProTimeF);
	////	printf("一共需要经过 %d 次变换！\n",ProTimeF);
	//system("pause");
	unsigned char test[19]="asdasd3123";
	char size = 0;
	size = sizeof(test);
	cout << size;
	return 0;
}