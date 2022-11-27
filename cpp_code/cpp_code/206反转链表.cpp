//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
////单链表
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(nullptr) {};
//};
//
//class Solution
//{
//public:
//	ListNode* reverseList(ListNode* head)
//	{
//		ListNode* temp;
//		ListNode* cur = head; 
//		ListNode* pre = nullptr; //空指针用于第一个节点的next（实际上就和创建一个虚拟节点差不多）
//		while (cur)
//		{
//			//保留cur的下一个节点
//			//交换第一第二个节点
//			temp = cur->next;
//			cur->next = pre;
//
//			//pre和cur向右移动一位
//			pre = cur;
//			cur = temp;
//		}
//		return pre;
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