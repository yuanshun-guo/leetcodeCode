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
//	std::vector<int> inorderTraversal(TreeNode* root)
//	{
//		//ջ�ͽ������ʹ�õ�����д�������������Ҫ����ָ��ı������������ʽڵ㣬ջ����������ڵ��ϵ�Ԫ�ء�
//		std::stack<TreeNode*> st;
//		std::vector<int> result;
//		TreeNode* cur = root; // ָ��
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
//				//�����µ���
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