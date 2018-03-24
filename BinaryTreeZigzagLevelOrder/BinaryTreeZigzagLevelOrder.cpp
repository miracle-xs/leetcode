// BinaryTreeZigzagLevelOrder.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stack>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};

vector<vector<int>> zigzagLevelOrder(TreeNode* root);
vector<vector<int>> levelOrder(TreeNode* root);
int main()
{
	TreeNode *t1 = new TreeNode(3);
	TreeNode *t2 = new TreeNode(9);
	TreeNode *t3 = new TreeNode(20);
	TreeNode *t4 = new TreeNode(15);
	TreeNode *t5 = new TreeNode(7);
	t1->left = t2;
	t1->right = t3;
	t2->left = nullptr;
	t2->right = nullptr;
	t3->left = t4;
	t3->right = t5;
	t4->left = nullptr;
	t4->right = nullptr;
	t5->left = nullptr;
	t5->right = nullptr;
//	zigzagLevelOrder(t1);
	vector<vector<int>> ans;
	ans=levelOrder(t1);
    return 0;
}

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
	stack<TreeNode*> level[2];
	vector<vector<int>> ans;
	vector<int> temp;
	int current = 0, next = 1;
	level[0].push(root);
	while (!level[0].empty() || !level[1].empty()) {
		TreeNode* pNode = level[current].top();
		level[current].pop();
		temp.push_back(pNode->val);
		if (current == 0) {
			if (pNode->left)
				level[next].push(pNode->left);
			if (pNode->right)
				level[next].push(pNode->right);
		}
		else {
			if (pNode->right)
				level[next].push(pNode->right);
			if (pNode->left)
				level[next].push(pNode->left);
		}
		if (level[current].empty()) {
			ans.push_back(temp);
			temp.clear();
			current = 1 - current;
			next = 1 - next;
		}
	}
	return ans;
}

vector<vector<int>> levelOrder(TreeNode* root) {
	queue<TreeNode*> que;
	vector<vector<int>> ans;
	if (!root)
		return ans;
	vector<int> temp;
	int tobeprint = 1;
	int nextprint = 0;
	que.push(root);
	while (!que.empty()) {
		TreeNode* pNode = que.front();
		temp.push_back(pNode->val);
		que.pop();
		tobeprint--;
		if (pNode->left) {
			que.push(pNode->left);
			nextprint++;
		}
		if (pNode->right) {
			que.push(pNode->right);
			nextprint++;
		}
		if (!tobeprint) {
			tobeprint = nextprint;
			nextprint = 0;
			ans.push_back(temp);
			temp.clear();
		}
	}
	return ans;
}