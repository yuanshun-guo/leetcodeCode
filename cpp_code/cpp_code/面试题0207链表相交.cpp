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
//	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
//	{
//		ListNode* curA = headA;
//		ListNode* curB = headB;
//		int lenA = 0, lenB = 0;
//
//		while (curA != nullptr) //������A�ĳ���
//		{
//			lenA++;
//			curA = curA->next;
//		}
//		while (curB != nullptr) //������B�ĳ���
//		{
//			lenB++;
//			curB = curB->next;
//		}
//
//		//�ص�ͷ�ڵ�
//		curA = headA;
//		curB = headB;
//
//		//��curA��Ϊ����ӵ�ͷ��lenAΪ�䳤��
//		if (lenA < lenB)
//		{
//			swap(lenA, lenB);
//			swap(curA, curB);
//		}
//
//		//���Ȳ�->��Ϊ��վ��ͬһ��������
//		int gap = lenA - lenB;
//
//		//�Ʋ�ͬһ�����ߣ�����19��
//		while (gap--)
//		{
//			curA = curA->next;
//		}
//		//����curA��curB����ͬ�򷵻�
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