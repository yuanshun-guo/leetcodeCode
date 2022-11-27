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
	TreeNode* trimBST(TreeNode* root, int low, int high)
		//核心思想：来回地找区间
		//递归是抄的
		//这里用迭代吧
	{
		if (root == nullptr)
		{
			return nullptr;
		}
		if (root->val < low)
		{
			TreeNode* right = trimBST(root->right, low, high); //往右节点// 寻找符合区间[low, high]的节点
			return right;
		}
		if (root->val > high)
		{
			TreeNode* left = trimBST(root->left, low, high); //往左节点// 寻找符合区间[low, high]的节点
			return left;
		}
		root->left = trimBST(root->left, low, high);//// root->left接入符合条件的左孩子
		root->right = trimBST(root->right, low, high);//// root->right接入符合条件的右孩子
		return root;
	}
};


class Solution1
{
public:
	TreeNode* trimBST(TreeNode* root, int low, int high)
	{
		if (!root)
		{
			return nullptr;
		}

		//处理头结点，让root移动到[L, R] 范围内，注意是左闭右闭
		while (root != nullptr && (root->val <low || root->val > high))
		{
			if (root->val < low)
			{
				root = root->right; // 小于low往右走
			}
			else
			{
				root = root->left; //小于right往左走
			}
		}
		TreeNode* cur = root;
		//此时root已经在[low, right]范围内，处理左孩子元素小于low的情况
		while (cur != nullptr)
		{
			while (cur->left && cur->left->val < low)
			{
				cur->left = cur->left->right;
			}
			cur = cur->left;
		}
		cur = root;
		

		//此时root已经在[low, right] 范围内，处理右孩子大于high
		while (cur != nullptr)
		{
			while (cur->right && cur->right->val > high)
			{
				cur->right = cur->right->left;
			}
			cur = cur->right;
		}
		return root;		
	}
	
}



int main()
{
	system("pause");

	return 0;
}