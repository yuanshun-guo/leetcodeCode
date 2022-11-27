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
	TreeNode* traversal(std::vector<int>& nums, int left, int right)
	{
		//核心思想：还是要爱中间进行分割

		//终止条件
		if (left > right)
		{
			return nullptr;
		}
		//取中间值
		int mid = left +((right - left) / 2);
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = traversal(nums, left, mid - 1);
		root->right = traversal(nums, mid + 1, right);
		return root;
	}
public:
	TreeNode* sortedArrayToBST(std::vector<int>& nums)
	{
		TreeNode* root = traversal(nums, 0, nums.size() - 1);
		return root;
	}
};



int main()
{
	system("pause");

	return 0;
}