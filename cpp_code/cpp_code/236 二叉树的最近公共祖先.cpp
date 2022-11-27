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
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
		//����˼�룬���ú����������Ȼ�Ļ��ݣ�
	{
		//��ֹ����
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