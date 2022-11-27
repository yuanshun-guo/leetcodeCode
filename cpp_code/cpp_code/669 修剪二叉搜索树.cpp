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
	TreeNode* trimBST(TreeNode* root, int low, int high)
		//����˼�룺���ص�������
		//�ݹ��ǳ���
		//�����õ�����
	{
		if (root == nullptr)
		{
			return nullptr;
		}
		if (root->val < low)
		{
			TreeNode* right = trimBST(root->right, low, high); //���ҽڵ�// Ѱ�ҷ�������[low, high]�Ľڵ�
			return right;
		}
		if (root->val > high)
		{
			TreeNode* left = trimBST(root->left, low, high); //����ڵ�// Ѱ�ҷ�������[low, high]�Ľڵ�
			return left;
		}
		root->left = trimBST(root->left, low, high);//// root->left�����������������
		root->right = trimBST(root->right, low, high);//// root->right��������������Һ���
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

		//����ͷ��㣬��root�ƶ���[L, R] ��Χ�ڣ�ע��������ұ�
		while (root != nullptr && (root->val <low || root->val > high))
		{
			if (root->val < low)
			{
				root = root->right; // С��low������
			}
			else
			{
				root = root->left; //С��right������
			}
		}
		TreeNode* cur = root;
		//��ʱroot�Ѿ���[low, right]��Χ�ڣ���������Ԫ��С��low�����
		while (cur != nullptr)
		{
			while (cur->left && cur->left->val < low)
			{
				cur->left = cur->left->right;
			}
			cur = cur->left;
		}
		cur = root;
		

		//��ʱroot�Ѿ���[low, right] ��Χ�ڣ������Һ��Ӵ���high
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