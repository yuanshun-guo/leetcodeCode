//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <queue>
//
////������
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//
//	//�ڵ�Ĺ��캯��
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
//};
//
//
//class Solution
//{
//public:
//
//	//��˵�����õݹ�ȽϺã�
//	//(�����ͷ���ֵ+��ֹ����+����ݹ��߼�)
//
//	//����һ�������Ըýڵ�Ϊ���ڵ�Ķ������ĸ߶ȣ��������ƽ��������򷵻�-1
//	int getHeight(TreeNode* node)
//	{
//		if (node == nullptr)
//		{
//			return 0;
//		}
//		int leftHeight = getHeight(node->left); //��
//		if (leftHeight == -1)
//		{
//			return -1;
//		}
//		int rightHeight = getHeight(node->right);//��
//		if (rightHeight == -1)
//		{
//			return -1;
//		}
//		int result;
//		if (abs(leftHeight - rightHeight) > 1)   // ��
//		{
//			result = -1;
//		}
//		else
//		{
//			result = 1 + std::max(leftHeight, rightHeight); // �Ե�ǰ�ڵ�Ϊ���ڵ���������߶�
//		}
//
//		return result;
//	}
//
//	bool isBalanced(TreeNode* root)
//	{
//		return getHeight(root) == -1 ? false : true;
//	}
//};
//
//
//
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}