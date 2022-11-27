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
//	std::vector<int> rightSideView(TreeNode* root)
//	{
//		//核心思想：在最基础的层序上，每一层只取最后一个元素
//
//		std::queue<TreeNode*> que;
//		std::vector<int> result;
//		if (root == nullptr)
//		{
//			return result;
//		}
//
//		que.push(root);
//		while (!que.empty())
//		{
//			int size = que.size();  // (一层) 这里一定要使用固定大小size，不要使用que.size()，因为que.size是不断变化的
//			int vec;
//			//同一层
//			for (int i = 0; i < size; i++)
//			{
//				TreeNode* node = que.front();
//				if (i == size - 1)
//				{
//					vec = node->val;
//				}
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
//
//			result.push_back(vec);
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