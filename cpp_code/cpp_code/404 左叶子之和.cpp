//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
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
//	int sumOfLeftLeaves(TreeNode* root)
//	{
//		//����˼�룺����ýڵ����ڵ㲻Ϊ�գ��ýڵ����ڵ����ڵ�Ϊ�գ��ýڵ����ڵ���ҽڵ�Ϊ�գ����ҵ���һ����Ҷ��
//		//��������ǰ��
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