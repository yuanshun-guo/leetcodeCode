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
//		root1->right = mergeTrees(root1->right, root2->right);
//		return root1;
//	}
//};
//
//
//class Solution1 {
//public:
//	TreeNode* searchBST(TreeNode* root, int val)
//	{
//		while (root != nullptr)
//		{
//			if (root->val > val)
//			{
//				root = root->left;
//			}
//			else if (root->val < val)
//			{
//				root = root->right;
//			}
//			else
//			{
//				return root;
//			}
//		}
//		return nullptr;
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