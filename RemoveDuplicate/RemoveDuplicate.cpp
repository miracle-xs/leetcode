// RemoveDuplicate.cpp : �������̨Ӧ�ó������ڵ㡣
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
