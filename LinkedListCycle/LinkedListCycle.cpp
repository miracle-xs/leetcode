// LinkedListCycle.cpp : 定义控制台应用程序的入口点。
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


bool hasCycle(ListNode *head);
int main()
{
	ListNode *l1 = new ListNode(1);
	ListNode *l2 = new ListNode(2);
	l1->next = l2;
	l2->next = l1;
	cout << hasCycle(l1);

    return 0;
}

bool hasCycle(ListNode *head) {
	if (!head)
		return false;
	ListNode* slow = head->next;
	if (!slow)
		return false;
	ListNode* fast = slow->next;
	while (slow&&fast) {
		if (slow == fast)
			return true;
		slow = slow->next;
		fast = fast->next;
		if (fast)
			fast = fast->next;
	}
	return false;
}