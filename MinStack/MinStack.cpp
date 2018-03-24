// MinStack.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stack>
using namespace std;

class Minstack{
public:
	stack<int> st;
	stack<int> Min;
//	int m_iMin=0;
	void push(int x);
	void pop();
	int top();
	int getMin();
	Minstack();
};

int main()
{
    return 0;
}

void Minstack::push(int x) {
	st.push(x);
	if (Min.empty() || x <= Min.top())
		Min.push(x);
}
void Minstack::pop() {
	if (st.top() == Min.top()) {
		Min.pop();
	}
	st.pop();
}
int Minstack::top() {
	return st.top();
}
int Minstack::getMin() {
	return Min.top();
}