//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <stack>
//#include <string>
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
//	//����һ���ݹ麯��
//	void traversal(TreeNode* cur, std::vector<int>& path, std::vector<std::string>& result)
//	{
//		path.push_back(cur->val);
//
//		//��������Ҷ�ӽڵ�
//		if (cur->left == nullptr && cur->right == nullptr)
//		{
//			std::string sPath;
//			for (int i = 0; i < path.size() - 1; i++)
//			{
//				sPath += std::to_string(path[i]);
//				sPath += "->";
//			}
//			sPath += std::to_string(path[path.size() - 1]);
//			result.push_back(sPath);
//			return;
//		}
//		if (cur->left)
//		{
//			traversal(cur->left, path, result);
//			path.pop_back(); //�������
//		}
//		if (cur->right)
//		{
//			traversal(cur->right, path, result);
//			path.pop_back(); //�������
//		}
//	}
//
//
//	std::vector<std::string> binaryTreePaths(TreeNode* root)
//	{
//		// �ݹ鷨����д
//		std::vector<std::string> result;
//		std::vector<int> path;
//		if (root == nullptr)
//		{
//			return result;
//		}
//		traversal(root, path, result);
//		return result;
//	}
//};
//
//
//
//class Solution1
//{
//public:
//	std::vector<std::string> binaryTreePaths(TreeNode* root)
//	{
//		std::stack<TreeNode*> treeSt;// �������ı����ڵ�
//		std::stack<std::string> pathSt;   // �������·���Ľڵ�
//		std::vector<std::string> result;  // ��������·������
//
//		if (root == nullptr)
//		{
//			return result;
//		}
//		treeSt.push(root);
//		pathSt.push(std::to_string(root->val));
//		while (!treeSt.empty())
//		{
//			TreeNode* node = treeSt.top();
//			treeSt.pop();
//			std::string path = pathSt.top();
//			pathSt.pop();
//			if (node->left == nullptr && node->right == nullptr)
//			{
//				//����Ҷ�ӽڵ�
//				result.push_back(path);
//			}
//			if (node->right)
//			{
//				//��
//				treeSt.push(node->right);
//				pathSt.push(path + "->" + std::to_string(node->right->val));
//			}
//			if (node->left)
//			{
//				//��
//				treeSt.push(node->left);
//				pathSt.push(path + "->" + std::to_string(node->left->val));
//			}
//		}
//		return result;
//	}
//};
//
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}