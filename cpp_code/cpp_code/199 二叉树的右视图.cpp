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
//	std::vector<int> rightSideView(TreeNode* root)
//	{
//		//����˼�룺��������Ĳ����ϣ�ÿһ��ֻȡ���һ��Ԫ��
//
//		std::queue<TreeNode*> que;
//		std::vector<int> result;
//		if (root == nullptr)
//		{
//			return result;
//		}
//
//		que.push(root);
//		while (!que.empty())
//		{
//			int size = que.size();  // (һ��) ����һ��Ҫʹ�ù̶���Сsize����Ҫʹ��que.size()����Ϊque.size�ǲ��ϱ仯��
//			int vec;
//			//ͬһ��
//			for (int i = 0; i < size; i++)
//			{
//				TreeNode* node = que.front();
//				if (i == size - 1)
//				{
//					vec = node->val;
//				}
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
//			}
//
//			result.push_back(vec);
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