// test.cpp : �������̨Ӧ�ó������ڵ㡣
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
	NewDate = NewDate * LastDate; //���һ�γ˻���
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
	//	//		printf("�� %d �ν��Ϊ %ld \n", ProTimeF, NewDate);
	//}
	//else
	//{
	//	printf("�������ݳ�Ϊ��λ!�Զ�����\n");
	//	return -1;
	//}
	//while (NewDate>9)
	//{
	//	NewDate = Getproduct(NewDate);
	//	ProTimeF++;
	//	//		printf("�� %d �ν��Ϊ %ld \n", ProTimeF, NewDate);
	//}
	//printf("%d", ProTimeF);
	////	printf("һ����Ҫ���� %d �α任��\n",ProTimeF);
	//system("pause");
	unsigned char test[19]="asdasd3123";
	char size = 0;
	size = sizeof(test);
	cout << size;
	return 0;
}