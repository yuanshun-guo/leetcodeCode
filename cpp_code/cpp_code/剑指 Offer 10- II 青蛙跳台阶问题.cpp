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
//		//����˼�룺������i�㣬��dp[i]�з���
//
//		if (n <= 1)
//		{
//			return 1;
//		}
//		//����һ���������ڶ�̬�滮
//		std::vector<int> dp(n + 1, 0);
//		//��ʼ��
//		dp[1] = 1;
//		dp[2] = 2;
//		//���ƹ�ʽ
//		for (int i = 3; i < n + 1; i++)
//		{
//			dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;  //������ʺ������Ҫȡģ
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