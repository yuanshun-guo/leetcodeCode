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
	void backtracking(std::vector<int>& nums, int startIndex, std::vector<int>& used)
	{
		result.push_back(path); //这个就是路途中的节点

		//used[i - 1] == 1; 说明同一树枝 nums[i - 1]使用过
		//used[i - 1] == 0; 说明同一数层 nums[i - 1]使用过

		for (int i = startIndex; i < nums.size(); i++)
		{
			if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == 0)
			{
				continue;
			}
			path.push_back(nums[i]);
			used[i] = 1;
			backtracking(nums, i + 1, used);
			used[i] = 0;
			path.pop_back();
		}
	}

public:
	std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums)
	{
		std::vector<int> used(nums.size(), 0);
		std::sort(nums.begin(), nums.end());
		backtracking(nums, 0, used);
		return result;
	};


	int main()
	{
		system("pause");

		return 0;
	}