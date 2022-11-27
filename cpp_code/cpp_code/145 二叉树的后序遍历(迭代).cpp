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
//class Solution
//{
//public:
//	std::vector<int> postorderTraversal(TreeNode* root)
//	{
//		//栈和结果
//		std::stack<TreeNode*> st;
//		std::vector<int> result;
//
//		if (root == nullptr)
//		{
//			return result;
//		}
//
//		st.push(root);
//		while (!st.empty())
//		{
//			TreeNode* node = st.top(); //中
//			st.pop();
//
//			result.push_back(node->val);
//			if (node->left)
//			{
//				st.push(node->left);   //左
//			}
//			if (node->right)
//			{
//				st.push(node->right);	//右
//			}
//
//		}
//		reverse(result.begin(), result.end());  //反转   中右左--》左右中
//		return result;
//	}
//
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