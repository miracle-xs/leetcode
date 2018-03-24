// SameTree.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int main()
{
	TreeNode* root1 = NULL;
	TreeNode* root2 = NULL;
	if (root1 == NULL&&root2 == NULL)
		cout << "true" << endl;
	if (root1 == NULL || root2 == NULL)
		cout << "false" << endl;
	/*int a = 0;
	if (a != 0)
		return -1;*/
    return 0;
}

bool isSameTree(TreeNode* p, TreeNode* q) {
	if (p->val == q->val)
	{
		if (isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
			return true;
		else
			return false;
	}
	else
		return false;
}