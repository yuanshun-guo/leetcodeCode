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
//class Solution {
//public:
//
//	//�ݹ麯��
//	void traversal(TreeNode* cur, std::vector<int>& vec)
//	{
//		if (cur == nullptr)
//		{
//			return;
//		}
//		traversal(cur->left, vec); //��
//		traversal(cur->right, vec); //��
//		vec.push_back(cur->val);
//	}
//
//	std::vector<int> postorderTraversal(TreeNode* root)
//	{
//		std::vector<int> result;
//		traversal(root, result);
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