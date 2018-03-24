// Interview_59.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

template<typename T> class CQueue {
public:
	CQueue(void);
	~CQueue(void);

	void appendTail(const T& node);
	T deleteHead();
private:
	stack<T> stack1;
	stack<T> stack2;
};

template<typename T> void CQueue<T>::appendTail(const T& element) {
	stack1.push(element);
}

template<typename T> T CQueue<T>::deleteHead() {
	if (stack2.size() <= 0) {
		while (stack1.size() > 0) {
			T& data = stack1.top();
			stack1.pop();
			stack2.push(data);
		}
	}
	if (stack2.size() == 0) {
		throw new exception("queue is empty");
	}
	T head = stack2.top();
	stack2.pop();
	return head;
}
vector<int> maxInWindows(const vector<int>& num, unsigned int size);
int main()
{
	vector<int> num = { 2,3,4,2,6,2,5,1 };
	maxInWindows(num, 3);
    return 0;
}

vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
	vector<int> maxInWindows;
	if (num.size() >= size&&size >= 1) {
		deque<int> index;

		for (unsigned int i = 0; i < size; i++) {
			while (!index.empty() && num[i] >= num[index.back()])
				index.pop_back();
			index.push_back(i);
		}

		for (unsigned int i = size; i < num.size(); ++i) {
			maxInWindows.push_back(num[index.front()]);

			while (!index.empty() && num[i] >= num[index.back()])
				index.pop_back();
			if (!index.empty() && index.front() < (int)(i - size))
				index.pop_front();

			index.push_back(i);
		}
		maxInWindows.push_back(num[index.front()]);
	}
	return maxInWindows;
}