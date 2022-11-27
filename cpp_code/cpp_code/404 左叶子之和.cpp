//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
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
//	int sumOfLeftLeaves(TreeNode* root)
//	{
//		//核心思想：如果该节点的左节点不为空，该节点的左节点的左节点为空，该节点的左节点的右节点为空，则找到了一个左叶子
//		//迭代法（前序）
//		std::stack<TreeNode*> st;
//		int result = 0;
//		if (root == nullptr)
//		{
//			return result;
//		}
//		st.push(root);
//		while (!st.empty())
//		{
//			TreeNode* node = st.top();
//			st.pop();
//			if (node->left != nullptr && node->left->left == nullptr && node->left->right == nullptr)
//			{
//				result += node->left->val;
//			}
//			if (node->right)
//			{
//				st.push(node->right);
//			}
//			if (node->left)
//			{
//				st.push(node->left);
//			}
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