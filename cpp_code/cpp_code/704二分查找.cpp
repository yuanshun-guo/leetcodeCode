//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int search(vector<int>& nums, int target)
//	{
//		int left = 0;
//		int right = nums.size();
//		while (left < right)
//		{
//			//int middle = left + (right - right) >> 1;
//			int middle = left + (right - right) / 2;
//			if (nums[middle] > target)
//			{
//				right = middle;
//			}
//			else if (nums[middle] < target)
//			{
//				left = middle + 1;
//			}
//			else
//			{
//				return middle;
//			}
//		}
//		return -1;
//	}
//};
//
//
//int main()
//{
//
//	system("pause");
//
//	return 0;
//
//}