//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <queue>
//
////������
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//
//	//�ڵ�Ĺ��캯��
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
//};
//
//
//class Solution
//{
//public:
//	int countNodes(TreeNode* root)
//	{
//		std::queue<TreeNode*> que;
//		int  result = 0;
//		if (root == nullptr)
//		{
//			return result;
//		}
//
//		que.push(root);
//		while (!que.empty())
//		{
//			int size = que.size();  // (һ��) ����һ��Ҫʹ�ù̶���Сsize����Ҫʹ��que.size()����Ϊque.size�ǲ��ϱ仯��
//			int res = 0;
//			//ͬһ��
//			for (int i = 0; i < size; i++)
//			{
//				TreeNode* node = que.front();
//				que.pop();
//				res++;
//
//				if (node->left)
//				{
//					que.push(node->left);
//				}
//				if (node->right)
//				{
//					que.push(node->right);
//				}
//			}
//			result += res;
//		}
//		return result;
//	}
//};
//
//
//class Solution1
//{
//public:
//	int countNodes(TreeNode* root)
//	{
//		//����
//		int result = 0;
//		if (root == nullptr)
//		{
//			return result;
//		}
//		TreeNode* left_node = root->left;
//		TreeNode* right_node = root->right;
//		int left_height = 0;
//		int right_height = 0;
//		while (left_node)
//		{
//			left_node = left_node->left;
//			left_height++;
//		}
//		while (right_node)
//		{
//			right_node = right_node->right;
//			right_height++;
//		}
//		if (left_height == right_height)  //˵�����������������
//		{
//			return (2 << left_height) - 1;
//		}
//		return countNodes(root->left) + countNodes(root->right) + 1;
//
//	}
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