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
//	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
//	{
//		ListNode* curA = headA;
//		ListNode* curB = headB;
//		int lenA = 0, lenB = 0;
//
//		while (curA != nullptr) //求链表A的长度
//		{
//			lenA++;
//			curA = curA->next;
//		}
//		while (curB != nullptr) //求链表B的长度
//		{
//			lenB++;
//			curB = curB->next;
//		}
//
//		//回到头节点
//		curA = headA;
//		curB = headB;
//
//		//让curA成为最长链接的头，lenA为其长度
//		if (lenA < lenB)
//		{
//			swap(lenA, lenB);
//			swap(curA, curB);
//		}
//
//		//长度差->是为了站在同一起跑线上
//		int gap = lenA - lenB;
//
//		//移步同一起跑线，类似19题
//		while (gap--)
//		{
//			curA = curA->next;
//		}
//		//遍历curA和curB，相同则返回
//		while (curA != nullptr)
//		{
//			if (curA == curB)
//			{
//				return curA;
//			}
//			else
//			{
//				curA = curA->next;
//				curB = curB->next;
//			}
//		}
//		return nullptr;
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