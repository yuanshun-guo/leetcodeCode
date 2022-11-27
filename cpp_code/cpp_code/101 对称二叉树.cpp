//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
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
//class Solution {
//public:
//	bool isSymmetric(TreeNode* root)
//	{
//		//����˼�룺˵����ֻ���ú���������ҿ�����һ��˼�룬û��ʵ���Ե����ֳ���
//		//�����ǲ������
//
//		//�������˳�ʼ���жϣ�����
//		if (root == nullptr)
//		{
//			return false;
//		}
//
//		std::queue<TreeNode*> que;
//		//����Ҫ�Ƚϵ��Ǹ��ڵ������������so����Ҫ�����ڵ�����ȥ
//		que.push(root->left);
//		que.push(root->right);
//		while (!que.empty())
//		{
//			TreeNode* node1 = que.front();
//			que.pop();
//			TreeNode* node2 = que.front();
//			que.pop();
//			//��ʼ�Ƚ�
//			if (!node1 && !node2) //ͬʱû�У�����
//			{
//				continue;
//			}
//			if (!node1 || !node2 || (node1->val != node2->val)) //������˳�����⣡��������
//			{
//				return false;
//			}
//			//����������ȵ����(���ﲻ��Ҫ�ж������ӽڵ��Ƿ��������ڣ���Ϊ��������ֱ�ӽ����ж�)
//			que.push(node1->left);
//			que.push(node2->right);
//			que.push(node1->right);
//			que.push(node2->left);
//		}
//		return true;
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