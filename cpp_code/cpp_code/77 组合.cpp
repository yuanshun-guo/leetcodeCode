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

class Solution
{
private:
	//回溯函数（递归函数）
	std::vector<std::vector<int>> result;
	std::vector<int> path;

	void backtracking(int n, int k, int startIndex)
	{
		//深度遍历的终止
		if (path.size() == k)
		{
			result.push_back(path);
			return;
		}
		for (int i = startIndex; i <= n - (k - path.size()) + 1; i++) //进行了剪枝
		{
			path.push_back(i);// 处理节点
			backtracking(n, k, i + 1); //不能用i++或++i
			path.pop_back();//回溯
		}
	}

public:
	std::vector<std::vector<int>> combine(int n, int k)
	{
		backtracking(n, k, 1);
		return result;
	}

};



int main()
{
	system("pause");

	return 0;
}