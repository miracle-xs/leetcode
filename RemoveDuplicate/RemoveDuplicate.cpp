// RemoveDuplicate.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};
ListNode* deleteDuplicates(ListNode* head);

int main()
{
	
}

ListNode* deleteDuplicates(ListNode* head) {
	if (head->next == NULL || head == NULL)
		return head;
	head->next = deleteDuplicates(head->next);
	return head->val == head->next->val ? head->next : head;
}
