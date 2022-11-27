//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <string>
//#include <stack>
//
//
//class CQueue 
//{
//public:
//	std::stack<int> stIn;
//	std::stack<int> stOut;
//	CQueue() {};
//
//	void appendTail(int value)
//	{
//		stIn.push(value);
//	}
//
//	int deleteHead()
//	{
//		if (stOut.empty())
//		{
//			if (stIn.empty())
//			{
//				return -1;
//			}
//			//½«In×ªµ½Out
//			while (!stIn.empty())
//			{
//				stOut.push(stIn.top());
//				stIn.pop();
//			}
//		}
//		int result = stOut.top();
//		stOut.pop();
//		return result;
//	}
//};