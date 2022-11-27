//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <stack>
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
//	TreeNode* constructMaximumBinaryTree(std::vector<int>& nums)
//	{
//		TreeNode* node = new TreeNode(0);
//		if (nums.size() == 1)
//		{
//			node->val = nums[0];
//			return node;
//		}
//		// 找到数组中最大的值和对应的下标
//		int maxValue = 0;
//		int maxValueIndex = 0;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] > maxValue)
//			{
//				maxValue = nums[i];
//				maxValueIndex = i;
//			}
//		}
//		node->val = maxValue;
//		// 最大值所在的下标左区间 构造左子树
//		if (maxValueIndex > 0)
//		{
//			std::vector<int> newVec(nums.begin(), nums.begin() + maxValueIndex);
//			node->left = constructMaximumBinaryTree(newVec);
//		}
//		// 最大值所在的下标右区间 构造右子树
//		if (maxValueIndex < (nums.size() - 1)) {
//			std::vector<int> newVec(nums.begin() + maxValueIndex + 1, nums.end());
//			node->right = constructMaximumBinaryTree(newVec);
//		}
//		return node;
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