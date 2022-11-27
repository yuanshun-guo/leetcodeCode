//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
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
//	ListNode* swapParis(ListNode* head)
//	{
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//		ListNode* cur = dummyHead;
//		while (cur->next != nullptr && cur->next->next != nullptr)
//		{
//			//记录两个临时节点
//			ListNode* tmp = cur->next;
//			ListNode* tmp1 = cur->next->next->next;
//
//			//开始操作
//			cur->next = cur->next->next;
//			cur->next->next = tmp;
//			cur->next->next->next = tmp1;
//
//			//移动cur指针
//			cur = cur->next->next;
//		}
//		return dummyHead->next;
//	}
//
//};
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}