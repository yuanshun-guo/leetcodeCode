//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <queue>
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
//	TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)
//	{
//		//һ���ͻᣬһЩ�ͷ�
//		if (root1 == nullptr)
//		{
//			return root2;
//		}
//		if (root2 == nullptr)
//		{
//			return root1;
//		}
//		root1->val += root2->val;
//		root1->left = mergeTrees(root1->left, root2->left);
//		root1->right = mergeTrees(root1->right, root2->right;
//		return root1;
//	}
//};
//
//
//class Solution1 {
//public:
//	TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)
//	{
//		if (root1 == nullptr)
//		{
//			return root2;
//		}
//		if (root2 == nullptr)
//		{
//			return root1;
//		}
//		std::queue<TreeNode*> que;
//		que.push(root1);
//		que.push(root2);
//		while (!que.empty())
//		{
//			TreeNode* node1 = que.front();
//			que.pop();
//			TreeNode* node2 = que.front();
//			que.pop();
//
//			// ��ʱ�����ڵ�һ����Ϊ�գ�val���
//			node1->val += node2->val;
//
//			// �����������ڵ㶼��Ϊ�գ��������
//			if (node1->left != nullptr && node2->left != nullptr)
//			{
//				que.push(node1->left);
//				que.push(node2->left);
//			}
//			// ����������ҽڵ㶼��Ϊ�գ��������
//			if (node1->right != nullptr && node2->right != nullptr)
//			{
//				que.push(node1->right);
//				que.push(node2->right);
//			}
//			// ��t1����ڵ� Ϊ�� t2��ڵ㲻Ϊ�գ��͸�ֵ��ȥ
//			if (node1->left == nullptr && node2->left != nullptr)
//			{
//				node1->left = node2->left;
//			}
//			// ��t1���ҽڵ� Ϊ�� t2�ҽڵ㲻Ϊ�գ��͸�ֵ��ȥ
//			if (node1->right == nullptr && node2->right != nullptr)
//			{
//				node1->right = node2->right;
//			}
//		}
//		return root1;
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