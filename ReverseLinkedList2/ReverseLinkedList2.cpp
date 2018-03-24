// ReverseLinkedList2.cpp : 定义控制台应用程序的入口点。
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

ListNode* reverseBetween(ListNode* head, int m, int n);
int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(4);
	ListNode* l5 = new ListNode(5);
	l1->next = l2;
	l2->next = l3;
	l3->next = l4;
	l4->next = l5;
//	l3->next = l5;
	l5->next = nullptr;
	reverseBetween(l1, 1, 4);
    return 0;
}

ListNode* reverseBetween(ListNode* head, int m, int n) {
	ListNode *dummy = new ListNode(-1);
	dummy->next = head;
	
	ListNode *cur = head;
	ListNode *pre;
	for (int i = 1; i < m-1; i++)
		cur = cur->next;
	pre = cur;
	cur = cur->next;
//	ListNode *p1, *p2;
	for (int i = m; i < n; i++) {
		ListNode *next = cur->next;

	}
//	pre->next
	/*ListNode* mNode = new ListNode(0);
	ListNode* nNode = new ListNode(0);
	ListNode* pPre;
	ListNode* dummy = new ListNode(0);
	dummy->next = head;
	mNode->next = head;
	nNode->next = head;
	for (int i = 0; i<n; i++) {
		if (i<m - 1) {
			mNode = mNode->next;
			nNode = nNode->next;
		}
		else
			nNode = nNode->next;
	}
	ListNode* pre = mNode;
	ListNode* pNext = nNode->next;
	mNode = mNode->next;
	pPre = mNode;
	ListNode* pNode = mNode;
	
	while (pNode != pNext) {
		ListNode* next = pNode->next;
		if (next == pNext)
			nNode = pNode;
		pNode->next = pPre;
		pPre = pNode;
		pNode = next;
	}
	pre->next = nNode;
	mNode->next = pNext;
	if (m == 1)
		head = pre->next;
	return head;*/
	
}