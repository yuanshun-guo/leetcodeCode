//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
////˼·��˫ָ��ľ���Ӧ�ã����Ҫɾ�������� n ���ڵ㣬�� fast �ƶ� n ����Ȼ���� fast �� slow ͬʱ
////�ƶ���ֱ�� fast ָ������ĩβ��ɾ�� slow ��ָ��Ľڵ�Ϳ�����
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
//	ListNode* removeNthFromEnd(ListNode* head, int n)
//	{
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//
//		ListNode* slow = dummyHead;
//		ListNode* fast = dummyHead;
//
//		//����fast�ƶ�
//		while (n-- && fast != nullptr)
//		{
//			fast = fast->next;
//		}
//		// fast ����ǰ��һ������Ϊ��Ҫ��slowָ��ɾ���ڵ����һ���ڵ�
//		fast = fast->next;
//
//		//˫ָ��ͬʱ�ƶ�
//		while (fast != nullptr) //������fast����fast->next��Ҳ����˵fast�������һ���ڵ�ʱ�����Խ���ѭ��
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