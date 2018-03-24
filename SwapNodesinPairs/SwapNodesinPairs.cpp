// SwapNodesinPairs.cpp : 定义控制台应用程序的入口点。
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

ListNode* swapPairs(ListNode* head);
int main()
{
	ListNode *l1 = new ListNode(1);
	ListNode *l2 = new ListNode(2);
	ListNode *l3 = new ListNode(3);
	ListNode *l4 = new ListNode(4);
	l1->next = l2;
	l2->next = nullptr;
	for (int i = 10, j = 1; i = j = 0; i++, j--) {
		cout << i << " " << j << endl;
	}

//	l2->next = l3;
//	l3->next = l4;
//	l4->next = nullptr;
//	swapPairs(l1);
    return 0;
}

ListNode* swapPairs(ListNode* head) {
	if (!head)
		return nullptr;
	ListNode *dummy = new ListNode(0);
	dummy->next = head;
	while (dummy->next&&dummy->next->next) {
		ListNode *tmp = dummy->next->next;
		dummy->next->next = tmp->next;
		tmp->next = dummy->next;
		dummy->next = tmp;
		dummy = tmp->next;
	}
	return dummy->next;
}
