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
	void backtracking(std::vector<int>& nums, int startIndex, int used)
	{
		//终止条件
		if (path.size() > 1) // 至少两个
		{
			result.push_back(path);
			//这里不需要return，因为要取树上的所有节点
		}

		//这里使用数组来进行去重操作，题目说的范围是[-100, 100]
		int used[201] = { 0 };

		for (int i = startIndex; i < nums.size(); i++)
		{
			if ((!path.empty() && nums[i] < path.back()) || used[nums[i] + 100] == 1) // 去重
			{
				continue;
			}
			used[nums[i] + 100] = 1;
			path.push_back(nums[i]);
			backtracking(nums, i + 1);
			path.pop_back();
		}
	}

public:
	std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums)
	{
		backtracking(nums, 0);
		return result;
	};


	int main()
	{
		system("pause");

		return 0;
	}