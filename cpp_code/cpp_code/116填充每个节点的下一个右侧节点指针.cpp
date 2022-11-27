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
//		std::queue<Node*> que; //直接在原来的基础上进行修改
//		if (root == nullptr)
//		{
//			return root;
//		}
//
//		que.push(root);
//		while (!que.empty())
//		{
//			int size = que.size();  // (一层) 这里一定要使用固定大小size，不要使用que.size()，因为que.size是不断变化的
//			//同一层
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