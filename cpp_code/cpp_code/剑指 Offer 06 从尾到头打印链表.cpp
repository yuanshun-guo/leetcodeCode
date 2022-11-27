//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//#include <stack>
//
////核心思想：
////把链表里面的数据放入一个数组中，然后将数组的数据反一下就可以，但是这样会多定义一个数组来存储数据使得空间复杂度增加，
////所以不实用。看到数据进去和出来顺序反着肯定就是栈了所以就想定义一个栈先把数据押入栈中，然后在将栈的数据存储的数组中即可。
//
//
////单链表
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	
//	//节点的构造函数
//	ListNode(int x) : val(x), next(NULL) {};
//};
//
//class Solution
//{
//public:
//	std::vector<int> reversePrint(ListNode* head)
//	{
//		std::vector<int> result;
//		std::stack<int> temp;
//		ListNode* cur = head;
//
//		//数据入栈
//		while (cur != nullptr)
//		{
//			temp.push(cur->val);
//			cur = cur->next;
//		}
//
//		while (!temp.empty())
//		{
//			result.push_back(temp.top());
//			temp.pop();
//		}
//
//		return result;
//	}
//};
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}