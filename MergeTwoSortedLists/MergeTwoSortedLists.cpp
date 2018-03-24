// MergeTwoSortedLists.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
int main()
{
	ListNode* l11 = new ListNode(1);
	ListNode* l12 = new ListNode(2);
	ListNode* l13 = new ListNode(4);
	ListNode* l21 = new ListNode(1);
	ListNode* l22 = new ListNode(3);
	ListNode* l23 = new ListNode(4);
	l11->next = l12;
	l12->next = l13;
	l13->next = NULL;
	l21->next = l22;
	l22->next = l23;
	l23->next = NULL;
	mergeTwoLists(l11, l21);
    return 0;
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode* temp = NULL;
	if (l1== NULL)
		return l2;
	if (l2 == NULL)
		return l1;
	if (l1->val < l2->val) {
		temp = l1;
		temp->next = mergeTwoLists(l1->next, l2);
	}
	else {
		temp = l2;
		temp->next = mergeTwoLists(l1, l2->next);
	}
	return temp;
}