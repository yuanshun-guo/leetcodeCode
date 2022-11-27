//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <queue>
//
//// Definition for a Node.
//class Node {
//public:
//	int val;
//	Node* left;
//	Node* right;
//	Node* next;
//
//	Node() : val(0), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val, Node* _left, Node* _right, Node* _next)
//		: val(_val), left(_left), right(_right), next(_next) {}
//};
//
//
//class Solution
//{
//public:
//	Node* connect(Node* root)
//	{
//		std::queue<Node*> que; //ֱ����ԭ���Ļ����Ͻ����޸�
//		if (root == nullptr)
//		{
//			return root;
//		}
//
//		que.push(root);
//		while (!que.empty())
//		{
//			int size = que.size();  // (һ��) ����һ��Ҫʹ�ù̶���Сsize����Ҫʹ��que.size()����Ϊque.size�ǲ��ϱ仯��
//			//ͬһ��
//			for (int i = 0; i < size; i++)
//			{
//				Node* node1 = que.front();
//				que.pop();
//				if (i < size - 1)
//				{
//					Node* node2 = que.front();
//					node1->next = node2;
//				}
//				else
//				{
//					node1->next = nullptr;				
//				}
//
//
//				if (node1->left)
//				{
//					que.push(node1->left);
//				}
//				if (node1->right)
//				{
//					que.push(node1->right);
//				}
//			}
//
//		}
//		return root;
//	}
//};
//
//
//
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}