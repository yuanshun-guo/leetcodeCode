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
//class Solution
//{
//public:
//	std::vector<int> postorderTraversal(TreeNode* root)
//	{
//		//ջ�ͽ��
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
//			TreeNode* node = st.top(); //��
//			st.pop();
//
//			result.push_back(node->val);
//			if (node->left)
//			{
//				st.push(node->left);   //��
//			}
//			if (node->right)
//			{
//				st.push(node->right);	//��
//			}
//
//		}
//		reverse(result.begin(), result.end());  //��ת   ������--��������
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