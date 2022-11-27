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
//class Solution {
//public:
//
//	//递归函数
//	void traversal(TreeNode* cur, std::vector<int>& vec)
//	{
//		if (cur == nullptr)
//		{
//			return;
//		}
//		traversal(cur->left, vec); //左
//		traversal(cur->right, vec); //右
//		vec.push_back(cur->val);
//	}
//
//	std::vector<int> postorderTraversal(TreeNode* root)
//	{
//		std::vector<int> result;
//		traversal(root, result);
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