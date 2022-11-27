//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////核心思想：类似15三数之和
////这个与454四数相加不同的是，前者只有一个数组，后者有四个数组
//
//class Solution
//{
//public:
//	std::vector<std::vector<int>> fouSum(std::vector<int>& nums, int target)
//	{
//		std::vector<std::vector<int>> result;
//
//		//先排序
//		sort(nums.begin(), nums.end());
//		for (int k = 0; k < nums.size(); k++)
//		{
//			//去重，和15三数之和一样
//			if (k > 0 && nums[k] == nums[k - 1])
//			{
//				continue;
//			}
//
//			//第二个嵌套循环
//			for (int i = k + 1; i < nums.size(); i++)
//			{
//				if (i > k + 1 && nums[i] == nums[i - 1])
//				{
//					continue;
//				}
//				int left = i + 1;
//				int right = nums.size() - 1;
//				while (right > left)
//				{
//					if (nums[k] + nums[i] + nums[left] + nums[right] > target)
//					{
//						right--;
//					}
//					else if (nums[k] + nums[i] + nums[left] + nums[right] < target)
//					{
//						left++;
//					}
//					else
//					{
//						result.push_back(std::vector<int>{nums[k], nums[i], nums[left], nums[right]});
//
//						//去重(防止挨着的相同的元素得到重复的情况)
//						while (right > left && nums[right] == nums[right - 1])
//						{
//							right--;
//						}
//						while (right > left && nums[left] == nums[left + 1])
//						{
//							left--;
//						}
//
//						//找到答案，同时收缩
//						right--;
//						left++;
//					}
//				}
//			}
//		}
//		return result;
//
//	}
//
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