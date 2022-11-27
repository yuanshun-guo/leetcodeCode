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
//	ListNode* detectCycle(ListNode* head)
//	{
//		ListNode* fast = head;
//		ListNode* slow = head;
//		while (fast != nullptr && fast->next != nullptr)
//		{
//			slow = slow->next;
//			fast = fast->next->next;
//			//相遇时的情况，从此从 head 和 相遇点，同时查找直至相遇x == z
//			if (slow == fast)
//			{
//				ListNode* index1 = fast;
//				ListNode* index2 = head;
//				while (index1 != index2)
//				{
//					index1 = index1->next;
//					index2 = index2->next;
//				}
//				return index2; // 交点就是我们相遇的位置，这个是需要结合图片的
//			}
//		}
//		return nullptr;
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