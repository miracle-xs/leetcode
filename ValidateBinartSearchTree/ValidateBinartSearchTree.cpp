// ValidateBinartSearchTree.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};
bool isValidBST(TreeNode *root);
vector<int> inOrderTraversal(TreeNode *root);
int main()
{
	TreeNode t1(0);
	TreeNode t2(1);
	t1.left = NULL;
	t1.right = &t2;
	t2.left = NULL;
	t2.right = NULL;
	cout<<isValidBST(&t1);
	inOrderTraversal(&t1);
	return 0;
}

bool isValidBST(TreeNode *root) {
	vector<int> res;
	res = inOrderTraversal(root);
	for (int i = 1; i < res.size(); i++) {
		if (res[i] < res[i - 1])
			return false;
	}
	return true;
}
vector<int> ans;
vector<int> inOrderTraversal(TreeNode *root) {
	
	if (!root)
		return ans;
	inOrderTraversal(root->left);
	ans.push_back(root->val);
	inOrderTraversal(root->right);
	return ans;
}