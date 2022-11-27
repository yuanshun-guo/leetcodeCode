//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <queue>
//
////二叉树
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//
//	//节点的构造函数
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
//			int size = que.size();  // (一层) 这里一定要使用固定大小size，不要使用que.size()，因为que.size是不断变化的
//			int res = 0;
//			//同一层
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
//		//不懂
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
//		if (left_height == right_height)  //说明这次是满二叉树了
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