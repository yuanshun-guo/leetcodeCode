#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>

//二叉树
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;

	//节点的构造函数
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};


class Solution
{
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
		//核心思想，利用后序遍历（天然的回溯）
	{
		//终止条件
		if (root == q || root == p || root == nullptr)
		{
			return root;
		}
		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);
		if (left != nullptr && right != nullptr)
		{
			return root;
		}
		else if (left != nullptr && right == nullptr)
		{
			return left;
		}
		else if (left == nullptr && right != nullptr)
		{
			return right;
		}
		else
		{
			return nullptr;
		}
	}
};





int main()
{
	system("pause");

	return 0;
}