//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <vector>
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
//	//递归函数
//	void traversal(TreeNode* cur, std::vector<int>& vec)
//	{
//		if (cur == nullptr)
//		{
//			return;
//		}
//		traversal(cur->left, vec); //左
//		vec.push_back(cur->val);
//		traversal(cur->right, vec); //右
//
//	}
//
//	bool isValidBST(TreeNode* root)
//		//核心思想：中序遍历+顺序判断
//	{
//		std::vector<int> result;
//		traversal(root, result);
//		for (int i = 0; i < result.size() - 1; i++)
//		{
//			if (result[i] > result[i + 1])
//			{
//				return false;
//			}
//		}
//		return true;
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