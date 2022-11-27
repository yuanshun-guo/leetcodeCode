#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>

//二叉树
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;

	//节点的构造函数
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};


class Solution
{
private:
	//递归函数
	void traversal(TreeNode* cur, std::unordered_map<int, int>& map)
	{
		if (cur == nullptr)
		{
			return;
		}
		map[cur->val]++;
		traversal(cur->left, map); //左
		traversal(cur->right, map); //右
		//return;
	}

	//排序
	bool static cmp(const pair<int, int>& a, const pair<int, int>& b)
	{
		return a.second > b.second;
	}

public:
	vector<int> findMode(TreeNode* root)
		//核心思想：中序遍历+顺序判断
	{
		std::vector<int> result;
		std::unordered_map<int, int> map;
		if (root == nullptr)
		{
			return result;
		}
		traversal(root, map);
		std::vector<pair<int, int>> vec(map.begin(), map.end());
		sort(vec.begin(), vec.end(), cmp);//排序
		result.push_back(vec[0].first);
		for (int i = 1; i < vec.size(); i++)
		{
			//防止有出现相同频率的元素出现
			if (vec[i].second == vec[0].second)
			{
				result.push_back(vec[i].first);
			}
			else
			{
				break;
			}
			
		}
		return result;
	}
};





int main()
{
	system("pause");

	return 0;
}