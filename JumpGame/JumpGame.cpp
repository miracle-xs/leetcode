// JumpGame.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
bool canJump(vector<int>& nums);
bool JumpCore(vector<int>& nums, int index);
int Min(int m, int n);
int main()
{
	vector<int> nums = { 2,3,1,1,4 };
//	vector<int> nums = { 3,2,0,0,4 };
//	vector<int> nums = {3,2,1,0,4 };
	cout << canJump(nums);
    return 0;
}

/*递归回溯法
//Time Limit exceeded

bool canJump(vector<int>& nums) {
int index = 0;
return JumpCore(nums, index);
}

bool JumpCore(vector<int>& nums, int index) {
	if (nums[index] == 0)
		return false;
	if (index == nums.size() - 1)
		return true;
	bool canJump = false;
	for (int i = 1; i <=nums[index]; i++) {
		canJump = JumpCore(nums, index + i);
		if (canJump)
			return canJump;
		else
			continue;
	}
	return canJump;
}
*/

/*动态规划算法
Time Limit exceeded

enum Index {
	GOOD, BAD, UNKNOWN
};
Index* memo;
bool JumpCore(vector<int>& nums, int index) {
	bool canJump = false;
	if (memo[index] != Index(2))
		return memo[index] == Index(0) ? true : false;
	for (int i = 1; i <= nums[index]; i++) {
		if (JumpCore(nums, index + i)) {
			memo[index] = Index(0);
			return true;
		}
	}

	memo[index] = Index(1);
	return false;
}
bool canJump(vector<int>& nums) {
	memo = new Index[nums.size()];
	for (int i = 0; i < nums.size(); i++)
		memo[i] = Index(2);
	memo[nums.size() - 1] = Index(0);
	return JumpCore(nums, 0);
}
*/

bool canJump(vector<int>& nums) {
	int lastpos = nums.size() - 1;
	for (int i = nums.size() - 1; i >= 0; i--) {
		if (i + nums[i] >= lastpos)
			lastpos = i;
	}
	return lastpos == 0;
}
int Min(int m, int n) {
	return m>n ? n : m;
}