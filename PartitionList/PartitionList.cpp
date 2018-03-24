// PartitionList.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;


struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){}
};

ListNode* partition(ListNode* head, int x);
int main()
{
	ListNode *l1 = new ListNode(3);
	ListNode *l2 = new ListNode(4);
	ListNode *l3 = new ListNode(2);
	l1->next = l2;
	l2->next = l3;
	l3->next = nullptr;
	partition(l1, 3);
    return 0;
}

ListNode* partition(ListNode* head, int x) {
	if (!head)
		return nullptr;
	ListNode* lessNode = new ListNode(0);
	ListNode* bigNode = new ListNode(0);
	ListNode* pNode = head;
	ListNode* less = lessNode;
	ListNode* big = bigNode;
	while (pNode) {
		ListNode* next = pNode->next;
		if (pNode->val<x) {
			lessNode->next = pNode;
			lessNode = lessNode->next;
			lessNode->next = nullptr;
		}
		else if (pNode->val >= x) {
			bigNode->next = pNode;
			bigNode = bigNode->next;
			bigNode->next = nullptr;
		}
		pNode = next;
	}
	lessNode->next = big->next;
	return less->next;
}