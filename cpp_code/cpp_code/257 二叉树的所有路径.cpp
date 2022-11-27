//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <stack>
//#include <string>
//
////二叉树
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//
//	//节点的构造函数
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
//};
//
//
//class Solution {
//public:
//	//定义一个递归函数
//	void traversal(TreeNode* cur, std::vector<int>& path, std::vector<std::string>& result)
//	{
//		path.push_back(cur->val);
//
//		//这里遇到叶子节点
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
//			path.pop_back(); //这里回溯
//		}
//		if (cur->right)
//		{
//			traversal(cur->right, path, result);
//			path.pop_back(); //这里回溯
//		}
//	}
//
//
//	std::vector<std::string> binaryTreePaths(TreeNode* root)
//	{
//		// 递归法，抄写
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
//		std::stack<TreeNode*> treeSt;// 保存树的遍历节点
//		std::stack<std::string> pathSt;   // 保存遍历路径的节点
//		std::vector<std::string> result;  // 保存最终路径集合
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
//				//遇到叶子节点
//				result.push_back(path);
//			}
//			if (node->right)
//			{
//				//右
//				treeSt.push(node->right);
//				pathSt.push(path + "->" + std::to_string(node->right->val));
//			}
//			if (node->left)
//			{
//				//左
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