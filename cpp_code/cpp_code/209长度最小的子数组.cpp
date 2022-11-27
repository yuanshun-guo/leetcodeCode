//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//
//class Solution
//{
//public:
//	int minSubArrayLen(int target, vector<int>& nums)
//	{
//		int result = INT32_MAX;  //结果（常量INT_MAX和INT_MIN分别表示最大、最小整数，定义在头文件limits.h中）
//		int sum = 0; //窗口内的和
//		int i = 0;  //窗口起始点
//		int subLength = 0;  //窗口长度
//		for (int j = 0; j < nums.size(); j++)
//		{
//			sum += nums[j];
//			while (sum >= target)  //因为sum初始值为0可能就小于s
//			{
//				subLength = (j - i + 1); //更新子序列的长度
//				result = result < subLength ? result : subLength; //将当前的长度与之前的长度进行比较
//				sum -= nums[i++];
//			}
//		}
//		//如果result从来就没有被赋值，那么就返回0
//		return result == INT32_MAX ? 0 : result;
//	}
//};
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}