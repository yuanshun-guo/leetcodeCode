#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>

//������
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;

	//�ڵ�Ĺ��캯��
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};


class Solution
{
private:
	TreeNode* traversal(std::vector<int>& nums, int left, int right)
	{
		//����˼�룺����Ҫ���м���зָ�

		//��ֹ����
		if (left > right)
		{
			return nullptr;
		}
		//ȡ�м�ֵ
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