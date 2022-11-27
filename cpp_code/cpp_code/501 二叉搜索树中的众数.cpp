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
private:
	//�ݹ麯��
	void traversal(TreeNode* cur, std::unordered_map<int, int>& map)
	{
		if (cur == nullptr)
		{
			return;
		}
		map[cur->val]++;
		traversal(cur->left, map); //��
		traversal(cur->right, map); //��
		//return;
	}

	//����
	bool static cmp(const pair<int, int>& a, const pair<int, int>& b)
	{
		return a.second > b.second;
	}

public:
	vector<int> findMode(TreeNode* root)
		//����˼�룺�������+˳���ж�
	{
		std::vector<int> result;
		std::unordered_map<int, int> map;
		if (root == nullptr)
		{
			return result;
		}
		traversal(root, map);
		std::vector<pair<int, int>> vec(map.begin(), map.end());
		sort(vec.begin(), vec.end(), cmp);//����
		result.push_back(vec[0].first);
		for (int i = 1; i < vec.size(); i++)
		{
			//��ֹ�г�����ͬƵ�ʵ�Ԫ�س���
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