//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <stack>
//
////������
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//
//	//�ڵ�Ĺ��캯��
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
//};
//
//
//class Solution {
//public:
//	TreeNode* invertTree(TreeNode* root)
//	{
//		std::stack<TreeNode*> st; //������ջ
//		if (root == nullptr)
//		{
//			return root;
//		}
//
//		st.push(root);
//		while (!st.empty())
//		{
//			TreeNode* node = st.top();
//			std::swap(node->left, node->right);
//			st.pop();
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
//		return root;
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