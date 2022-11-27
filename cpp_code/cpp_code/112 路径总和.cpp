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
//	bool hasPathSum(TreeNode* root, int targetSum)
//	{
//		if (root == nullptr)
//		{
//			return false;
//		}
//		std::stack<std::pair<TreeNode*, int>> st; //用于入栈
//		st.push(std::pair<TreeNode*, int> (root, root->val)); //用于存放节点指针和当前的和
//
//		while (!st.empty())
//		{
//			std::pair<TreeNode*, int> pa = st.top();
//			st.pop();
//			
//			//若为叶子节点，同时该处的和为sum,返回true
//			if (!pa.first->left && !pa.first->right && pa.second == targetSum)
//			{
//				return true;
//			}
//			//再判断右节点
//			if (pa.first->right)
//			{
//				st.push(std::pair<TreeNode*, int>(pa.first->right, pa.second+pa.first->right->val));
//			}
//			//再判断左节点
//			if (pa.first->left)
//			{
//				st.push(std::pair<TreeNode*, int>(pa.first->left, pa.second+pa.first->left->val));
//			}
//		}
//		return false;
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