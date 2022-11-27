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
		//核心思想：这道题用236的代码完全可以，这里利用二叉搜索树的特点，）
		//只要从上到下遍历的时候， cur 节点是数值在 [p, q] 区间中则说明该节点 cur 就是最近公共祖先了
		//这里我们用迭代
	{
		while (root)
		{
			if ((root->val > p->val) && (root->val > q->val))
			{
				root = root->left;
			}
			else if ((root->val < p->val) && (root->val < q->val))
			{
				root = root->right;
			}
			else
			{
				return root;
			}
		}
		return nullptr;
	}
};





int main()
{
	system("pause");

	return 0;
}