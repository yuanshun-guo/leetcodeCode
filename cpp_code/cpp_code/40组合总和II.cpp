//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
///*
//void backtracking(参数) {
//	if (终止条件) {
//		存放结果;
//		return;
//	}
//
//	for (选择：本层集合中元素（树中节点孩子的数量就是集合的大小）) {
//		处理节点;
//		backtracking(路径，选择列表); // 递归
//		回溯，撤销处理结果
//	}
//}
//*/
//class Soultion
//{
//private:
//	std::vector<std::vector<int>> result;
//	std::vector<int> path;
//	
//	void backtracking(std::vector<int> candidates, int sum, int target, int startIndex, std::vector<int> used)
//	{
//		//终止条件
//		//if (sum > target) //这个可以省略，因为下面的遍历操作有剪枝
//		//{
//		//	return;
//		//}
//
//		if (sum == target)
//		{
//			result.push_back(path);
//			return;
//		}
//
//		
//
//		//遍历
//		for (int i = startIndex; i < candidates.size() && sum + candidates[i] <= target; i++)
//		{
//			/*
//		used[i - 1] == true，说明同一树枝 candidates[i - 1] 使用过
//		used[i - 1] == false，说明同一树层 candidates[i - 1] 使用过
//
//		这个需要结合carl的操作树比较好
//		*/
//			//对同一层的重复元素跳过
//			if (i > 0 && candidates[i] == candidates[i - 1] && used[i - 1] == 0)
//			{
//				continue;
//			}
//			sum += candidates[i];
//			path.push_back(candidates[i]);
//			used[i] = 1;
//			backtracking(candidates, sum, target, i + 1, used);
//			used[i] = 0;
//			sum -= candidates[i];
//			path.pop_back();
//		}
//
//	}
//
//public:
//	std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target)
//	{
//		std::vector<int> used(candidates.size(), 0); // 遍历是用来记录当一个元素是否使用
//
//		std::sort(candidates.begin(), candidates.end());
//		backtracking(candidates, 0, target, 0, used);
//		return result;
//	}
//
//};
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}