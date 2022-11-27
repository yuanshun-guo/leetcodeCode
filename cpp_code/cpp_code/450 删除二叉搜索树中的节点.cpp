//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
////二叉树
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//
//	//节点的构造函数
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
//};
//
//
//class Solution
//{
//public:
//	TreeNode* deleteNode(TreeNode* root, int key)
//		/*有以下五种情况：
//		• 第一种情况：没找到删除的节点，遍历到空节点直接返回了
//		• 找到删除的节点
//		– 第二种情况：左右孩子都为空（叶子节点），直接删除节点，返回 NULL 为根节点
//		– 第三种情况：删除节点的左孩子为空，右孩子不为空，删除节点，右孩子补位，返回右孩
//		子为根节点
//		– 第四种情况：删除节点的右孩子为空，左孩子不为空，删除节点，左孩子补位，返回左孩
//		子为根节点
//		– 第五种情况：左右孩子节点都不为空，则将删除节点的左子树头结点（左孩子）放到删除
//		节点的右子树的最左面节点的左孩子上，返回删除节点右孩子为新的根节点。*/
//	{
//		if (root == nullptr)
//		{
//			return root; //第一种情况
//		}
//		if (root->val == key) //找到了
//		{
//			//第二种情况
//			if (root->left == nullptr && root->right == nullptr)
//			{
//				//内存释放
//				delete root;
//				return nullptr;
//			}
//			//第三种情况
//			else if (root->left == nullptr)
//			{
//				auto retNode = root->right;
//				delete root;
//				return retNode;
//			}
//			//第四种情况
//			else if (root->right == nullptr)
//			{
//				auto retNode = root->left;
//				delete root;
//				return retNode;
//			}
//			//第五种情况
//			else
//			{
//				TreeNode* cur = root->right; //用于寻找删除节点右子树最左边的节点
//				while (cur->left != nullptr)
//				{
//					cur = cur->left;
//				}
//				cur->left = root->left;
//				TreeNode* tmp = root; //用于下面删除节点
//				root = root->right;
//				delete tmp;
//
//				return root;
//			}
//		}
//
//		if (root->val > key)
//		{
//			root->left = deleteNode(root->left, key);
//		}
//		if (root->val < key)
//		{
//			root->right = deleteNode(root->right, key);
//		}
//		return root;
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