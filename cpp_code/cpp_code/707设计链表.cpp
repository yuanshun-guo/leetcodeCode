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
////��������ͷ�ڵ�
//class Solution1
//{
//	int get(int index);
//	int addAtHead(int val);
//	int addAtTail(int val);
//	int addAtIndex(int index, int val);
//	int deleteAtIndex(int index);
//
//};
//
////���ǲ�������һ������ͷ�ڵ�
//class MyLinkedList
//{
//public:
////	//���嵥����
////	struct LinkedNode
////	{
////		int val;
////		LinkedNode* next;
////		LinkedNode(int val) : val(val), next(nullptr) {};
////	};
////
////	//��ʼ���������캯����
////	MyLinkedList()
////	{
////		//������ͷ�ڵ㸳ֵ
////		_dummyHead = new LinkedNode(0);
////		_size = 0;
////	}
////
////	//get(int index)
////	int get(int index)
////	{
////		if (index > (_size - 1) || index < 0)
////		{
////			return -1;
////		}
////		//���嵱ǰ�ڵ�
////		LinkedNode* cur = _dummyHead->next;
////		while (index--)
////		{
////			cur = cur->next;
////		}
////		return cur->val;
////	}
////
////	//addAtHead(int val)
////	void addAtHead(int val)
////	{
////		LinkedNode* newNode = new LinkedNode(val);
////		newNode->next = _dummyHead->next;
////		_dummyHead->next = newNode;
////		_size++;
////	}
////
////	//addAtTail(int val)
////	void addAtTail(int val)
////	{
////		LinkedNode* newNode = new LinkedNode(val);
////		LinkedNode* cur = _dummyHead;
////		while (cur->next != nullptr)
////		{
////			cur = cur->next;
////		}
////		cur->next = newNode;
////		_size++;
////	}
////
////	//addAtIndex(int index, int val);
////	void addAtIndex(int index, int val)
////	{
////		if (index > _size) //����������һ�����壬Ҳ����˵���ض��ȴ���һ�������������в���Ĳ���
////		{
////			return;
////		}
////		LinkedNode* newNode = new LinkedNode(val);
////		LinkedNode* cur = _dummyHead;
////		while (index--)
////		{
////			cur = cur->next;
////		}
////		newNode->next = cur->next;
////		cur->next = newNode;
////		_size++;
////	}
////
////
////	//int deleteAtIndex(int index);
////	void deleteAtIndex(int index)
////	{
////		if (index >= _size || index < 0)
////		{
////			return;
////		}
////		LinkedNode* cur = _dummyHead;
////		while (index--)
////		{
////			cur = cur->next;
////		}
////		LinkedNode* temp = cur->next;
////		cur->next = cur->next->next;
////		delete temp;
////		_size--;
////	}
////
////	//��ӡ����
////	void printLinkedList()
////	{
////		LinkedNode* cur = _dummyHead;
////		while (cur->next != nullptr)
////		{
////			cout << cur->next->val << " ";
////			cur = cur->next;
////		}
////		cout << endl;
////
////	}
////
////private:
////	int _size;
////	LinkedNode* _dummyHead; //����ͷ�ڵ�
//};
//
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}