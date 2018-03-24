// popOrder.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    return 0;
}

bool IsPopOrder(const int* pPush, int* pPop, int nLength) {
	bool bpossible = false;
	if (pPush != nullptr&&pPop != nullptr&&nLength > 0) {
		const int* pNextPush = pPush;
		const int* pNextPop = pPop;
		stack<int> st;
		while (pNextPop - pPop < nLength) {
			while (st.empty() || st.top() != *pNextPop) {
				if (pNextPush - pPush == nLength)
					break;
				st.push(*pNextPush);
				pNextPush++;
			}
			if (st.top() != *pNextPop)
				break;
			st.pop();
			pNextPop++;
		}
		if (st.empty() && pNextPop - pPop == nLength)
			bpossible = true;
		
	}
	return bpossible;
}
