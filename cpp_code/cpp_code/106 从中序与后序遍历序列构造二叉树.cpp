//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <stack>
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
//	TreeNode* traversal(std::vector<int>& inorder, std::vector<int>& postorder)
//	{
//		if (postorder.size() == 0)
//		{
//			return nullptr;
//		}
//
//		// ��������������һ��Ԫ�أ����ǵ�ǰ���м�ڵ�
//		int rootValue = postorder[postorder.size() - 1];
//		TreeNode* root = new TreeNode(rootValue);
//
//		// Ҷ�ӽڵ�
//		if (postorder.size() == 1)
//		{
//			return root;
//		}
//
//		// �ҵ�����������и��
//		int delimiterIndex;
//		for (delimiterIndex = 0; delimiterIndex < inorder.size(); delimiterIndex++)
//		{
//			if (inorder[delimiterIndex] == rootValue)
//			{
//				break; //��ȡ��������ķָ��
//			}
//		}
//
//		// �и���������
//		// ����ҿ����䣺[0, delimiterIndex)
//		std::vector<int> leftInorder(inorder.begin(), inorder.begin() + delimiterIndex);
//		// [delimiterIndex + 1, end)    ɾ����һ��Ԫ�أ���Ȼ��+1
//		std::vector<int> rightInorder(inorder.begin() + delimiterIndex + 1, inorder.end());
//
//		// postorder ����ĩβԪ��
//		postorder.resize(postorder.size() - 1); // ǿ��
//
//		// �и��������
//		/*����������и����ô�ң�
//		��������û����ȷ���и�Ԫ�������������и����������������ȷ���и�㣬�и�����ҷֿ��Ϳ����ˡ�
//		��ʱ��һ�����صĵ㣬�������������Сһ���Ǻͺ�������Ĵ�С��ͬ�ģ����Ǳ�Ȼ����
//		�����������Ƕ��г�������������������������ˣ���ô��������Ϳ��԰�������������Ĵ�С���и�г������������Һ������顣*/
//
//		// ��Ȼ����ҿ���ע������ʹ���������������С��Ϊ�и��
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