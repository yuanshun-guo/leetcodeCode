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
//class Solution {
//public:
//	TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)
//	{
//		//一看就会，一些就废
//		if (root1 == nullptr)
//		{
//			return root2;
//		}
//		if (root2 == nullptr)
//		{
//			return root1;
//		}
//		root1->val += root2->val;
//		root1->left = mergeTrees(root1->left, root2->left);
//		root1->right = mergeTrees(root1->right, root2->right;
//		return root1;
//	}
//};
//
//
//class Solution1 {
//public:
//	TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)
//	{
//		if (root1 == nullptr)
//		{
//			return root2;
//		}
//		if (root2 == nullptr)
//		{
//			return root1;
//		}
//		std::queue<TreeNode*> que;
//		que.push(root1);
//		que.push(root2);
//		while (!que.empty())
//		{
//			TreeNode* node1 = que.front();
//			que.pop();
//			TreeNode* node2 = que.front();
//			que.pop();
//
//			// 此时两个节点一定不为空，val相加
//			node1->val += node2->val;
//
//			// 如果两棵树左节点都不为空，加入队列
//			if (node1->left != nullptr && node2->left != nullptr)
//			{
//				que.push(node1->left);
//				que.push(node2->left);
//			}
//			// 如果两棵树右节点都不为空，加入队列
//			if (node1->right != nullptr && node2->right != nullptr)
//			{
//				que.push(node1->right);
//				que.push(node2->right);
//			}
//			// 当t1的左节点 为空 t2左节点不为空，就赋值过去
//			if (node1->left == nullptr && node2->left != nullptr)
//			{
//				node1->left = node2->left;
//			}
//			// 当t1的右节点 为空 t2右节点不为空，就赋值过去
//			if (node1->right == nullptr && node2->right != nullptr)
//			{
//				node1->right = node2->right;
//			}
//		}
//		return root1;
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