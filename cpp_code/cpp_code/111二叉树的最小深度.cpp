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
//	int minDepth(TreeNode* root)
//	{	
//		//����˼�룺��С����ǴӸ��ڵ㵽���Ҷ�ӽڵ�����·���ϵĽڵ�����
//		//ֻ�е����Һ��Ӷ�Ϊ�յ�ʱ�򣬲�˵����������͵��ˡ��������һ������Ϊ��������͵㣡����
//		std::queue<TreeNode*> que;
//		int result = 0;
//		if (root == nullptr)
//		{
//			return result;
//		}
//
//		que.push(root);
//		while (!que.empty())
//		{
//			int size = que.size();  // (һ��) ����һ��Ҫʹ�ù̶���Сsize����Ҫʹ��que.size()����Ϊque.size�ǲ��ϱ仯��
//			//ͬһ��
//
//			result++;
//			for (int i = 0; i < size; i++)
//			{
//				TreeNode* node = que.front();
//				que.pop();
//
//				if (node->left)
//				{
//					que.push(node->left);
//				}
//				if (node->right)
//				{
//					que.push(node->right);
//				}
//				if ((node->left == nullptr) && (node->right == nullptr))
//				{
//					return result;
//				}
//			}
//		}
//		return result;
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