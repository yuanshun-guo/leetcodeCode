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
	int pre; // ��¼ǰһ���ڵ����ֵ(ȫ�ֱ���)
	void traversal(TreeNode* cur)
	{
		if (cur == nullptr) 
		{
			return;
		}
		//������ ��������������
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