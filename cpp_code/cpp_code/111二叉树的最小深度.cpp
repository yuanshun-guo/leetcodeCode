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
//	int minDepth(TreeNode* root)
//	{	
//		//核心思想：最小深度是从根节点到最近叶子节点的最短路径上的节点数量
//		//只有当左右孩子都为空的时候，才说明遍历的最低点了。如果其中一个孩子为空则不是最低点！！！
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
//				if ((node->left == nullptr) && (node->right == nullptr))
//				{
//					return result;
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