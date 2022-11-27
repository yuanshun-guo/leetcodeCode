//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
//class Solution
//{
//public:
//	int numWays(int n)
//	{
//		//核心思想：爬到第i层，有dp[i]中方法
//
//		if (n <= 1)
//		{
//			return 1;
//		}
//		//定义一个数组用于动态规划
//		std::vector<int> dp(n + 1, 0);
//		//初始化
//		dp[1] = 1;
//		dp[2] = 2;
//		//递推公式
//		for (int i = 3; i < n + 1; i++)
//		{
//			dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;  //脑阔有屎，还需要取模
//		}
//		return dp[n];
//	}
//};
//
//
//
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}