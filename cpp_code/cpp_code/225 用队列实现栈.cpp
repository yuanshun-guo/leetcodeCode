//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <string>
//#include <queue>
//
//
//
//class MyStack
//{
//	//核心思想：其实这道题目就是用一个队列就够了。
//	//一个队列在模拟栈弹出元素的时候只要将队列头部的元素（除了最后一个元素外） 重新添加到队列尾部，此时在去弹出元素就是栈的顺序了。
//public:
//	std::queue<int> que;
//	MyStack() {};
//
//	void push(int x)
//	{
//		que.push(x);
//	}
//
//	int pop() // 相当于返回最后一个元素
//	{
//		int size = que.size();
//		size--;
//		while (size--)
//		{
//			que.push(que.front());
//			que.pop();
//		}
//		int result = que.front(); //此时目标元素在队首了
//		que.pop();
//		return result;
//	}
//
//	int top()
//	{
//		return que.back();
//	}
//
//	bool empty() 
//	{
//		return que.empty();
//	}
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