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
//	ListNode* detectCycle(ListNode* head)
//	{
//		ListNode* fast = head;
//		ListNode* slow = head;
//		while (fast != nullptr && fast->next != nullptr)
//		{
//			slow = slow->next;
//			fast = fast->next->next;
//			//����ʱ��������Ӵ˴� head �� �����㣬ͬʱ����ֱ������x == z
//			if (slow == fast)
//			{
//				ListNode* index1 = fast;
//				ListNode* index2 = head;
//				while (index1 != index2)
//				{
//					index1 = index1->next;
//					index2 = index2->next;
//				}
//				return index2; // �����������������λ�ã��������Ҫ���ͼƬ��
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