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
//	std::vector<int> preorderTraversal(TreeNode* root)
//	{
//		std::stack<TreeNode*> st; //������ջ
//		std::vector<int> result;  //������
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