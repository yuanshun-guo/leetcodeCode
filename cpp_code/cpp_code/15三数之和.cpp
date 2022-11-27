//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////核心思想：双指针
///*首先将数组排序，然后有一层for循环，i从下标0的地方开始，同时定一个下标left 定义在i+1的位置上，定义下标right 在数组结尾的位置上。
//使得a + b +c =0，我们这里相当于 a = nums[i]，b = nums[left]，c = nums[right]。
//如果nums[i] + nums[left] + nums[right] > 0 就说明 此时三数之和大了，因为数组是排序后了，所以right下标就应该向左移动，这样才能让三数之和小一些。
//如果 nums[i] + nums[left] + nums[right] < 0 说明 此时 三数之和小了，left 就向右移动，才能让三数之和大一些，直到left与right相遇为止。*/
//
//class Solution
//{
//public:
//	std::vector<std::vector<int>> threeSum(std::vector<int>& nums)
//	{
//		std::vector<std::vector<int>> result;
//		//先排序
//		sort(nums.begin(), nums.end());
//		// a = nums[i], b = nums[left], c = nums[right]
//		for (int i = 0; i < nums.size(); i++)
//		{
//			//第一个都大于0，那就没戏了
//			if (nums[i] > 0)
//			{
//				return result;
//			}
//
//			//正确去重
//			if (i > 0 && nums[i] == nums[i - 1])
//			{
//				continue;
//			}
//
//			//好戏开始
//			int left = i + 1;
//			int right = nums.size() - 1;
//			while (right > left)
//			{
//				if (nums[i] + nums[left] + nums[right] > 0)
//				{
//					right--;
//				}
//				else if (nums[i] + nums[left] + nums[right] < 0)
//				{
//					left++;
//				}
//				else
//				{
//					result.push_back(std::vector<int>{nums[i], nums[left], nums[right]});
//					while (right > left && nums[right] == nums[right - 1])
//					{
//						right--;
//					}
//					while (right > left && nums[left] == nums[left + 1])
//					{
//						left++;
//					}
//
//					//找到答案
//					right--;
//					left++;
//				}
//			}
//
//		}
//		return result;
//
//	}
//};
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}