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
//
//	//听说此题用递归比较好？
//	//(参数和返回值+终止条件+单层递归逻辑)
//
//	//定义一个返回以该节点为根节点的二叉树的高度，如果不是平衡二叉树则返回-1
//	int getHeight(TreeNode* node)
//	{
//		if (node == nullptr)
//		{
//			return 0;
//		}
//		int leftHeight = getHeight(node->left); //左
//		if (leftHeight == -1)
//		{
//			return -1;
//		}
//		int rightHeight = getHeight(node->right);//右
//		if (rightHeight == -1)
//		{
//			return -1;
//		}
//		int result;
//		if (abs(leftHeight - rightHeight) > 1)   // 中
//		{
//			result = -1;
//		}
//		else
//		{
//			result = 1 + std::max(leftHeight, rightHeight); // 以当前节点为根节点的树的最大高度
//		}
//
//		return result;
//	}
//
//	bool isBalanced(TreeNode* root)
//	{
//		return getHeight(root) == -1 ? false : true;
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