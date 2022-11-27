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
//	TreeNode* constructMaximumBinaryTree(std::vector<int>& nums)
//	{
//		TreeNode* node = new TreeNode(0);
//		if (nums.size() == 1)
//		{
//			node->val = nums[0];
//			return node;
//		}
//		// �ҵ�����������ֵ�Ͷ�Ӧ���±�
//		int maxValue = 0;
//		int maxValueIndex = 0;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] > maxValue)
//			{
//				maxValue = nums[i];
//				maxValueIndex = i;
//			}
//		}
//		node->val = maxValue;
//		// ���ֵ���ڵ��±������� ����������
//		if (maxValueIndex > 0)
//		{
//			std::vector<int> newVec(nums.begin(), nums.begin() + maxValueIndex);
//			node->left = constructMaximumBinaryTree(newVec);
//		}
//		// ���ֵ���ڵ��±������� ����������
//		if (maxValueIndex < (nums.size() - 1)) {
//			std::vector<int> newVec(nums.begin() + maxValueIndex + 1, nums.end());
//			node->right = constructMaximumBinaryTree(newVec);
//		}
//		return node;
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