//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////����˼�룺����15����֮��
////�����454������Ӳ�ͬ���ǣ�ǰ��ֻ��һ�����飬�������ĸ�����
//
//class Solution
//{
//public:
//	std::vector<std::vector<int>> fouSum(std::vector<int>& nums, int target)
//	{
//		std::vector<std::vector<int>> result;
//
//		//������
//		sort(nums.begin(), nums.end());
//		for (int k = 0; k < nums.size(); k++)
//		{
//			//ȥ�أ���15����֮��һ��
//			if (k > 0 && nums[k] == nums[k - 1])
//			{
//				continue;
//			}
//
//			//�ڶ���Ƕ��ѭ��
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
//						//ȥ��(��ֹ���ŵ���ͬ��Ԫ�صõ��ظ������)
//						while (right > left && nums[right] == nums[right - 1])
//						{
//							right--;
//						}
//						while (right > left && nums[left] == nums[left + 1])
//						{
//							left--;
//						}
//
//						//�ҵ��𰸣�ͬʱ����
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