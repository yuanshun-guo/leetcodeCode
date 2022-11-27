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
//	int maxDepth(TreeNode* root)
//	{
//		std::queue<TreeNode*> que;
//		int result = 0;
//		if (root == nullptr)
//		{
//			return result;
//		}
//
//		que.push(root);
//		while (!que.empty())
//		{
//			int size = que.size();  // (一层) 这里一定要使用固定大小size，不要使用que.size()，因为que.size是不断变化的
//			//同一层
//
//			result++;
//			for (int i = 0; i < size; i++)
//			{
//				TreeNode* node = que.front();
//				que.pop();
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
//		}
//		return result;
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