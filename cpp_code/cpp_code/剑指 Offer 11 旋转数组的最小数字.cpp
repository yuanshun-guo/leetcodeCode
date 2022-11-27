//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////核心思想：二分法
////只与右边的right进行比较
//
//class Solution
//{
//public:
//	int minArray(std::vector<int>& numbers)
//	{
//		int left = 0;
//		int right = numbers.size() - 1;
//		while (left < right)
//		{
//			int middle = (left + right) / 2;
//			if (numbers[middle] > numbers[right]) //说明在右边
//			{
//				left = middle + 1;
//			}
//			else if (numbers[middle] < numbers[right]) //说明在左边
//			{
//				right = middle;
//			}
//			else
//			{
//				right--;
//			}
//		}
//
//		//return numbers[left];
//		return numbers[right];
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