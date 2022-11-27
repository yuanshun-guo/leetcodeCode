//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
//
//
////µ¥Á´±í
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(nullptr) {};
//};
//
//
//class Solution
//{
//public:
//	ListNode* deleteNode(ListNode* head, int val)
//	{
//		ListNode* dummyNode = new ListNode(0);
//		dummyNode->next = head;
//
//		ListNode* cur = dummyNode;
//		while (true)
//		{
//			if (cur->next->val == val)
//			{
//				cur->next = cur->next->next;
//				return dummyNode->next;
//			}
//			cur = cur->next;
//		}
//	}
//
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