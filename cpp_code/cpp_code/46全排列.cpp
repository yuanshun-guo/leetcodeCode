#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>

/*
void backtracking(参数) {
	if (终止条件) {
		存放结果;
		return;
	}

	for (选择：本层集合中元素（树中节点孩子的数量就是集合的大小）) {
		处理节点;
		backtracking(路径，选择列表); // 递归
		回溯，撤销处理结果
	}
}
*/
class Soultion
{
private:
	std::vector<std::vector<int>> result;
	std::vector<int> path;


	//递归函数
	void backtracking(std::vector<int>& nums, std::vector<int>& used)
	{
		//终止条件
		if (path.size() == nums.size())
		{
			result.push_back(path);
			return;
		}

		for (int i = 0; i < nums.size(); i++)
		{
			if (used[i] == 1)
			{
				continue;
			}
			path.push_back(nums[i]);
			used[i] = 1;
			backtracking(nums, used);
			used[i] = 0;
			path.pop_back();
		}
	}

public:
	std::vector<std::vector<int>> permute(std::vector<int>& nums)
	{
		std::vector<int> used(nums.size(), 0);
		backtracking(nums, used);
		return result;
	};
};

int main()
{
	system("pause");
	return 0;
}