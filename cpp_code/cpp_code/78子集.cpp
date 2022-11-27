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
	void backtracking(int startIndex, std::vector<int>& nums)
	{
		result.push_back(path); //这个就是路途中的节点

		//终止条件（看不需要加，因为此时也已经到了for循环结束的时候了）
		/*if (startIndex > nums.size())
		{
			return;
		}*/

		for (int i = startIndex; i < nums.size(); i++)
		{
			path.push_back(nums[i]);
			backtracking(i + 1, nums);
			path.pop_back();
		}
	}

public:
	std::vector<std::vector<int>> subsets(std::vector<int>& nums)
	{
		backtracking(0, nums);
		return result;
	};


	int main()
	{
		system("pause");

		return 0;
	}