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
	void backtracking(int targetSum, int k, int startIndex, int sum)
	{
		//剪枝操作
		if (sum > targetSum)
		{
			return; //就是加了一个和 的限定
		}

		//终止条件
		if (path.size() == k)
		{
			if (sum == targetSum)
			{
				result.push_back(path);
			}
			return;
		}

		//横向遍历
		for (int i = startIndex; i <= 9 - (k - path.size()) + 1; i++)
		{
			sum += i;
			path.push_back(i);
			backtracking(targetSum, k, i + 1, sum);
			sum -= i;
			path.pop_back(); // 回溯
		}
	}

public:
	std::vector<std::vector<int>> combinationSum3(int k, int n)
	{
		backtracking(n, k, 1, 0);
		return result;
	}

};


int main()
{
	system("pause");

	return 0;
}