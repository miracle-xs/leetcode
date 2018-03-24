// RemoveLinkedListElement.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};
ListNode* deleteDuplicates(ListNode* head);
int main()
{
	ListNode *l1 = new ListNode(1);
	ListNode *l2 = new ListNode(1);
	ListNode *l3 = new ListNode(1);
	ListNode *l4 = new ListNode(3);

	/*ListNode *l4 = new ListNode(3);
	ListNode *l5 = new ListNode(4);
	ListNode *l6 = new ListNode(4);
	ListNode *l7 = new ListNode(5);*/

	l1->next = l2;
	l2->next = l3;
	l3->next = l4;
	l4->next = NULL;
	
	/*l4->next = l5;
	l5->next = l6;
	l6->next = l7;
	l7->next = NULL;*/
	ListNode *l;
	l=deleteDuplicates(l1);
    return 0;
}

//ListNode* deleteDuplicates(ListNode* head) {
//	if (head == NULL)
//		return NULL;
//	if (head != NULL&&head->next == NULL)
//		return head;
//	head->next = deleteDuplicates(head->next);
//	return head->val == head->next->val ? head->next : head;
//}

ListNode* deleteDuplicates(ListNode* head) {
	if (head == NULL)
		return head;
	/*if (head != NULL&&head->next == NULL)
		return head;*/
	if (head->next == NULL)
		return head;
	int val = head->val;
	ListNode *p = head->next;
	if (p->val != val) {
		head->next = deleteDuplicates(p);
		return head;
	}
	else {
		while (p&&p->val == val)
			p = p->next;
		return deleteDuplicates(p);
	}
	/*head->next = deleteDuplicates(head->next);
	if (head != NULL&&head->next == NULL)
		return head;
	int val = head->val;
	if (val == head->next->val) {
		while (head->next&&head->next->val == val) {
			if (head->next->next)
				head->next = head->next->next;
			else
				head->next = NULL;
		}
		return head->next;
	}
	else
		return head;*/
	
}