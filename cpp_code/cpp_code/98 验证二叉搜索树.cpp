//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <vector>
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
//	//�ݹ麯��
//	void traversal(TreeNode* cur, std::vector<int>& vec)
//	{
//		if (cur == nullptr)
//		{
//			return;
//		}
//		traversal(cur->left, vec); //��
//		vec.push_back(cur->val);
//		traversal(cur->right, vec); //��
//
//	}
//
//	bool isValidBST(TreeNode* root)
//		//����˼�룺�������+˳���ж�
//	{
//		std::vector<int> result;
//		traversal(root, result);
//		for (int i = 0; i < result.size() - 1; i++)
//		{
//			if (result[i] > result[i + 1])
//			{
//				return false;
//			}
//		}
//		return true;
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