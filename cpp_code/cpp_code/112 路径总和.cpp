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
//	bool hasPathSum(TreeNode* root, int targetSum)
//	{
//		if (root == nullptr)
//		{
//			return false;
//		}
//		std::stack<std::pair<TreeNode*, int>> st; //������ջ
//		st.push(std::pair<TreeNode*, int> (root, root->val)); //���ڴ�Žڵ�ָ��͵�ǰ�ĺ�
//
//		while (!st.empty())
//		{
//			std::pair<TreeNode*, int> pa = st.top();
//			st.pop();
//			
//			//��ΪҶ�ӽڵ㣬ͬʱ�ô��ĺ�Ϊsum,����true
//			if (!pa.first->left && !pa.first->right && pa.second == targetSum)
//			{
//				return true;
//			}
//			//���ж��ҽڵ�
//			if (pa.first->right)
//			{
//				st.push(std::pair<TreeNode*, int>(pa.first->right, pa.second+pa.first->right->val));
//			}
//			//���ж���ڵ�
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