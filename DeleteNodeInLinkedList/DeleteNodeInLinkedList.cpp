// DeleteNodeInLinkedList.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};

int main()
{
    return 0;
}

void deleteNode(ListNode* node) {
	ListNode* Next = node->next;
	node->val = Next->val;
	node->next = Next->next;
}