//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
////核心思想：
///*由于题目要求不能修改输入的数组，我们可以创建一个长度为n＋1的辅助数组，然后逐一把原数组的每个数字复制到辅助数组。
//如果原数组中被复制的数字是m，则把它复制到辅助数组中下标为m的位置。这样很容易就能发现哪个数字是重复的。
//由于需要创建一个数组，该方案需要O（n）的辅助空间。*/
//
//
////利用哈希（时间复杂度 O(N)，空间复杂度 O(N)）
//class Solution
//{
//public:
//	int findRepeatNumber(vector<int>& nums)
//	{
//		unordered_map<int, bool> map;
//		for (int num : nums)
//		{
//			if (map[num])
//			{
//				return num;
//			}
//			map[num] = true;
//		}
//		return -1;
//	}
//
//};
//
//
////原地交换（时间复杂度 O(N)，空间复杂度 O(1)）
//class Solution1
//{
//public:
//	int findRepeatNumber(vector<int>& nums)
//	{
//		int i = 0;
//		while (i < nums.size())
//		{
//			if (nums[i] == i)
//			{
//				i++;
//				continue;
//			}
//			if (nums[nums[i]] == nums[i])
//			{
//				return nums[i];
//			}
//			swap(nums[i], nums[nums[i]]);
//		}
//		return -1;
//	}
//
//};
//
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}