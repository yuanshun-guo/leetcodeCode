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
//	//����˼�룺��ʵ�����Ŀ������һ�����о͹��ˡ�
//	//һ��������ģ��ջ����Ԫ�ص�ʱ��ֻҪ������ͷ����Ԫ�أ��������һ��Ԫ���⣩ ������ӵ�����β������ʱ��ȥ����Ԫ�ؾ���ջ��˳���ˡ�
//public:
//	std::queue<int> que;
//	MyStack() {};
//
//	void push(int x)
//	{
//		que.push(x);
//	}
//
//	int pop() // �൱�ڷ������һ��Ԫ��
//	{
//		int size = que.size();
//		size--;
//		while (size--)
//		{
//			que.push(que.front());
//			que.pop();
//		}
//		int result = que.front(); //��ʱĿ��Ԫ���ڶ�����
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