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
private:
	int pre; // 记录前一个节点的数值(全局变量)
	void traversal(TreeNode* cur)
	{
		if (cur == nullptr) 
		{
			return;
		}
		//右中左 （反后续遍历）
		traversal(cur->right);
		cur->val += pre;
		pre = cur->val;
		traversal(cur->left);
	}
public:
	TreeNode* convertBST(TreeNode* root)
	{
		pre = 0;
		traversal(root);
		return root;
	}
};



int main()
{
	system("pause");

	return 0;
}