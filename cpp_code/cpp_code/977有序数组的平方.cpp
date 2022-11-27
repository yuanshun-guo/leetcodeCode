//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int> sortedSquares(vector<int>& nums)
//	{
//		int k = nums.size() - 1; //数组最后一个元素的下标
//		vector<int> result(nums.size(), 0);  //初始化，类似resize()
//		for (int i = 0, j = nums.size() - 1; i <= j; )
//		{
//			if (nums[i] * nums[i] < nums[j] * nums[j])
//			{
//				result[k--] = nums[j] * nums[j];
//				j--;
//			}
//			else
//			{
//				result[k--] = nums[i] * nums[i];
//				i++;
//			}
//		}
//		return result;
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