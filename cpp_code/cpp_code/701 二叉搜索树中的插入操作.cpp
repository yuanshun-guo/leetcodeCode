//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
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
//	TreeNode* insertIntoBST(TreeNode* root, int val)
//		//核心思想：只要遍历二叉搜索树，找到空节点插入元素就可以了，那么这道题其实就简单了
//	{
//		if (root == nullptr)
//		{
//			TreeNode* node = new TreeNode(val);
//			return node;
//		}
//		if (root->val > val)
//		{
//			root->left = insertIntoBST(root->left, val);
//		}
//		if (root->val < val)
//		{
//			root->right = insertIntoBST(root->right, val);
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