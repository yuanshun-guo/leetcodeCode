//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <string>
//#include <stack>
//
//
//
//class MyQueue
//{
//	//����˼�룺
//public:
//	std::stack<int> stIn;
//	std::stack<int> stOut;
//	MyQueue() {};
//
//	void push(int x)
//	{
//		stIn.push(x);
//	}
//
//	int pop()
//	{
//		if (stOut.empty())
//		{
//			//��Inת��Out
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
//
//	int peek()
//	{
//		int res = this->pop();
//		stOut.push(res); // ɾ�������
//		return res;
//	}
//
//	bool empty()
//	{
//		return stIn.empty() && stOut.empty();
//	}
//
//
//
//};
//
//
//int main()
//{
//	//test();
//
//	system("pause");
//
//	return 0;
//}