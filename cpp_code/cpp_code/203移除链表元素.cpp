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
//	ListNode(int x) : val(x), next(NULL) {};
//};
//
////设置虚拟头节点
//class Solution
//{
//	ListNode* removeElements(ListNode* head, int val)
//	{
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//		ListNode* cur = dummyHead; // 游标节点
//		while (cur->next != NULL)
//		{
//			if (cur->next->val == val)
//			{
//				ListNode* tmp = cur->next;
//				cur->next = cur->next->next;
//				delete tmp;  //及时删除无效的节点
//			}
//			else
//			{
//				cur = cur->next; // 这步是向下移动
//			}
//		}
//		head = dummyHead->next;
//		delete dummyHead; //手动清除头部节点
//		return head;
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