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
//		ListNode* pre = nullptr; //��ָ�����ڵ�һ���ڵ��next��ʵ���Ͼͺʹ���һ������ڵ��ࣩ
//		while (cur)
//		{
//			//����cur����һ���ڵ�
//			//������һ�ڶ����ڵ�
//			temp = cur->next;
//			cur->next = pre;
//
//			//pre��cur�����ƶ�һλ
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