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
		//����˼�룺�������236�Ĵ�����ȫ���ԣ��������ö������������ص㣬��
		//ֻҪ���ϵ��±�����ʱ�� cur �ڵ�����ֵ�� [p, q] ��������˵���ýڵ� cur �����������������
		//���������õ���
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