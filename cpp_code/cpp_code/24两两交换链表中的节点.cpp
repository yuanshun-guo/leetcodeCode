//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
//
////������
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
//			//��¼������ʱ�ڵ�
//			ListNode* tmp = cur->next;
//			ListNode* tmp1 = cur->next->next->next;
//
//			//��ʼ����
//			cur->next = cur->next->next;
//			cur->next->next = tmp;
//			cur->next->next->next = tmp1;
//
//			//�ƶ�curָ��
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