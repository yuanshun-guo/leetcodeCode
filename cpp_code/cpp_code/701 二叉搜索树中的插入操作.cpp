//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
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
//	TreeNode* insertIntoBST(TreeNode* root, int val)
//		//����˼�룺ֻҪ�����������������ҵ��սڵ����Ԫ�ؾͿ����ˣ���ô�������ʵ�ͼ���
//	{
//		if (root == nullptr)
//		{
//			TreeNode* node = new TreeNode(val);
//			return node;
//		}
//		if (root->val > val)
//		{
//			root->left = insertIntoBST(root->left, val);
//		}
//		if (root->val < val)
//		{
//			root->right = insertIntoBST(root->right, val);
//		}
//		return root;
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