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
//	std::vector<Node*> children;
//
//	Node() {}
//
//	Node(int _val)
//	{
//		val = _val;
//	}
//
//	Node(int _val, std::vector<Node*> _children)  //���캯��������
//	{
//		val = _val;
//		children = _children;
//	}
//};
//
//
//class Solution
//{
//public:
//	std::vector<std::vector<int>> levelOrder(Node* root)
//	{
//		std::queue<Node*> que;
//		std::vector<std::vector<int>> result;
//		if (root == nullptr)
//		{
//			return result;
//		}
//		que.push(root);
//		while (!que.empty())
//		{
//			int size = que.size();
//			std::vector<int> vec;
//			for (int i = 0; i < size; i++)
//			{
//				Node* node = que.front();
//				vec.push_back(node->val);
//				que.pop();
//
//				if (!node->children.empty())
//				{
//					//��Ϊ���Ƕ��������������Ҫ������б���
//					for (int i = 0; i < node->children.size(); i++)
//					{
//						if (node->children[i])
//						{
//							que.push(node->children[i]);//node�����Ǿ��Ǹ�����
//						}
//					}
//				}
//			}
//			result.push_back(vec);
//		}
//		return result;
//	}
//};