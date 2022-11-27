//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
////思路：双指针的经典应用，如果要删除倒数第 n 个节点，让 fast 移动 n 步，然后让 fast 和 slow 同时
////移动，直到 fast 指向链表末尾。删掉 slow 所指向的节点就可以了
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
//	ListNode* removeNthFromEnd(ListNode* head, int n)
//	{
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//
//		ListNode* slow = dummyHead;
//		ListNode* fast = dummyHead;
//
//		//先让fast移动
//		while (n-- && fast != nullptr)
//		{
//			fast = fast->next;
//		}
//		// fast 在提前走一步，因为需要让slow指向删除节点的上一个节点
//		fast = fast->next;
//
//		//双指针同时移动
//		while (fast != nullptr) //这里是fast不是fast->next，也就是说fast到达最后一个节点时还可以进入循环
//		{
//			fast = fast->next;
//			slow = slow->next;
//		}
//
//		slow->next = slow->next->next;
//		return dummyHead->next;
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