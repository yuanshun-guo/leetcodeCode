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
//		vec.push_back(cur->val); // 中
//		traversal(cur->right, vec); //右
//
//	}
//
//	int getMinimumDifference(TreeNode* root)
//		//核心思想：中序遍历+顺序判断
//	{
//		std::vector<int> result;
//		traversal(root, result);
//		if (result.size() < 2)
//		{
//			return 0;
//		}
//
//		int res = INT_MAX;
//		for (int i = 0; i < result.size() - 1; i++)
//		{
//			res = min(res, (result[i + 1] - result[i]));
//		}
//		return res;
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