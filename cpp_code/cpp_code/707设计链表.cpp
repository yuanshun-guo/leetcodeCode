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
//	ListNode(int x) : val(x), next(nullptr) {};
//};
//
////设置虚拟头节点
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
////还是采用设置一个虚拟头节点
//class MyLinkedList
//{
//public:
////	//定义单链表
////	struct LinkedNode
////	{
////		int val;
////		LinkedNode* next;
////		LinkedNode(int val) : val(val), next(nullptr) {};
////	};
////
////	//初始化链表（构造函数）
////	MyLinkedList()
////	{
////		//给虚拟头节点赋值
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
////		//定义当前节点
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
////		if (index > _size) //这与上面是一个整体，也就是说，必定先存在一个链表，再来进行插入的操作
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
////	//打印链表
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
////	LinkedNode* _dummyHead; //虚拟头节点
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