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
//	std::vector<int> inorderTraversal(TreeNode* root)
//	{
//		//栈和结果；在使用迭代法写中序遍历，就需要借用指针的遍历来帮助访问节点，栈则用来处理节点上的元素。
//		std::stack<TreeNode*> st;
//		std::vector<int> result;
//		TreeNode* cur = root; // 指针
//
//		while (!st.empty() || cur != nullptr)
//		{
//			if (cur != nullptr)
//			{
//				st.push(cur);
//				cur = cur->left;
//			}
//			else
//			{
//				//到左下底了
//				cur = st.top();
//				st.pop();
//				result.push_back(cur->val);
//				cur = cur->right;
//			}
//		}
//		return result;
//
//
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