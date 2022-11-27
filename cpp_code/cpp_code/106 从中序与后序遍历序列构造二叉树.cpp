//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <stack>
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
//class Solution {
//public:
//	TreeNode* traversal(std::vector<int>& inorder, std::vector<int>& postorder)
//	{
//		if (postorder.size() == 0)
//		{
//			return nullptr;
//		}
//
//		// 后序遍历数组最后一个元素，就是当前的中间节点
//		int rootValue = postorder[postorder.size() - 1];
//		TreeNode* root = new TreeNode(rootValue);
//
//		// 叶子节点
//		if (postorder.size() == 1)
//		{
//			return root;
//		}
//
//		// 找到中序遍历的切割点
//		int delimiterIndex;
//		for (delimiterIndex = 0; delimiterIndex < inorder.size(); delimiterIndex++)
//		{
//			if (inorder[delimiterIndex] == rootValue)
//			{
//				break; //获取中序遍历的分割点
//			}
//		}
//
//		// 切割中序数组
//		// 左闭右开区间：[0, delimiterIndex)
//		std::vector<int> leftInorder(inorder.begin(), inorder.begin() + delimiterIndex);
//		// [delimiterIndex + 1, end)    删除了一个元素，当然是+1
//		std::vector<int> rightInorder(inorder.begin() + delimiterIndex + 1, inorder.end());
//
//		// postorder 舍弃末尾元素
//		postorder.resize(postorder.size() - 1); // 强啊
//
//		// 切割后序数组
//		/*后序数组的切割点怎么找？
//		后序数组没有明确的切割元素来进行左右切割，不像中序数组有明确的切割点，切割点左右分开就可以了。
//		此时有一个很重的点，就是中序数组大小一定是和后序数组的大小相同的（这是必然）。
//		中序数组我们都切成了左中序数组和右中序数组了，那么后序数组就可以按照左中序数组的大小来切割，切成左后序数组和右后序数组。*/
//
//		// 依然左闭右开，注意这里使用了左中序数组大小作为切割点
//		// [0, leftInorder.size)
//		std::vector<int> leftPostorder(postorder.begin(), postorder.begin() + leftInorder.size());
//		// [leftInorder.size + 1, end)
//		std::vector<int> rightPostorder(postorder.begin() + leftInorder.size(), postorder.end());
//
//		root->left = traversal(leftInorder, leftPostorder);
//		root->right = traversal(rightInorder, rightPostorder);
//
//		return root;
//	}
//
//	TreeNode* buildTree(std::vector<int>& inorder, std::vector<int>& postorder)
//	{
//		if (inorder.size() == 0 || postorder.size() == 0)
//		{
//			return nullptr;
//		}
//		return traversal(inorder, postorder);
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