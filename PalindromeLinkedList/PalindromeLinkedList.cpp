// PalindromeLinkedList.cpp : 定义控制台应用程序的入口点。
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

ListNode* reverseList(ListNode* head);
//void print(ListNode* head);
int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(3);
	l1->next = l2;
	l2->next = l3;
	l3->next = NULL;
	reverseList(l1);
//	print(l1);
    return 0;
}

bool isPalindrome(ListNode* head) {
	if (!head || !head->next)
		return true;
	ListNode *fast, *slow;
	slow = fast = head;
	while (fast&&fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}
	if (fast) {
		//链表元素奇数个
		slow->next = reverseList(slow->next);
		slow = slow->next;
	}
	else {
		//链表元素偶数个
		slow = reverseList(slow);
	}
	while (slow) {
		if (head->val != slow->val) {
			return false;
		}
		slow = slow->next;
		head = head->next;
	}
	return true;
}

ListNode* reverseList(ListNode* head) {
	if (head == NULL || head->next == NULL)
		return head;
	ListNode *p = reverseList(head->next);
	head->next->next = head;
	head->next = NULL;
	return p;
	/*ListNode* prev = NULL;
	ListNode* curr = head;
	while (curr != NULL) {
		ListNode* nextTemp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nextTemp;
	}
	return prev;*/
}