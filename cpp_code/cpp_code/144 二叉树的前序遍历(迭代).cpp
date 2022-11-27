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
//	std::vector<int> preorderTraversal(TreeNode* root)
//	{
//		std::stack<TreeNode*> st; //用于入栈
//		std::vector<int> result;  //保存结果
//		if (root == nullptr)
//		{
//			return result;
//		}
//
//		st.push(root);
//		while (!st.empty())
//		{
//			TreeNode* node = st.top();
//			st.pop();
//
//			result.push_back(node->val);
//			
//			if (node->right)
//			{
//				st.push(node->right);
//			}
//			if (node->left)
//			{
//				st.push(node->left);
//			}
//
//		}
//		return result;
//
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