//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
//class Solution
//{
//public:
//	//取值各个位上的单数之和
//	int getSum(int n)
//	{
//		int sum = 0;
//		while (n)
//		{
//			sum += (n % 10) * (n % 10);
//			n /= 10;
//		}
//		return sum;
//	}
//	
//
//	bool isHappy(int n)
//	{
//		unordered_set<int> set;
//		while (true)
//		{
//			int sum = getSum(n);
//			if (sum == 1)
//			{
//				return true;
//			}
//
//			//如果找到
//			if (set.find(sum) != set.end())
//			{
//				return false;
//			}
//			else
//			{
//				set.insert(sum);
//			}
//			n = sum;
//		}
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