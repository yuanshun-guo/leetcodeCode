//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
////������
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {};
//};
//
////��������ͷ�ڵ�
//class Solution
//{
//	ListNode* removeElements(ListNode* head, int val)
//	{
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//		ListNode* cur = dummyHead; // �α�ڵ�
//		while (cur->next != NULL)
//		{
//			if (cur->next->val == val)
//			{
//				ListNode* tmp = cur->next;
//				cur->next = cur->next->next;
//				delete tmp;  //��ʱɾ����Ч�Ľڵ�
//			}
//			else
//			{
//				cur = cur->next; // �ⲽ�������ƶ�
//			}
//		}
//		head = dummyHead->next;
//		delete dummyHead; //�ֶ����ͷ���ڵ�
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