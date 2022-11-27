//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <queue>
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
//	bool isSymmetric(TreeNode* root)
//	{
//		//核心思想：说的是只能用后序遍历，我看就是一种思想，没有实质性地体现出来
//		//更像是层序遍历
//
//		//又忘记了初始的判断！！！
//		if (root == nullptr)
//		{
//			return false;
//		}
//
//		std::queue<TreeNode*> que;
//		//我们要比较的是根节点的两颗子树，so不需要将根节点加入进去
//		que.push(root->left);
//		que.push(root->right);
//		while (!que.empty())
//		{
//			TreeNode* node1 = que.front();
//			que.pop();
//			TreeNode* node2 = que.front();
//			que.pop();
//			//开始比较
//			if (!node1 && !node2) //同时没有，成立
//			{
//				continue;
//			}
//			if (!node1 || !node2 || (node1->val != node2->val)) //这里有顺序问题！！！！！
//			{
//				return false;
//			}
//			//接下来是相等的情况(这里不需要判断左右子节点是否真正存在，因为在上述会直接进行判断)
//			que.push(node1->left);
//			que.push(node2->right);
//			que.push(node1->right);
//			que.push(node2->left);
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