//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////核心思想：可以用reverse()函数
//
//class Solution
//{
//public:
//	std::string reverseStr(std::string s, int k)
//	{
//		for (int i = 0; i < s.size(); i += (2 * k))
//		{
//			if (i + k <= s.size()) //说明在正常范围内
//			{
//				reverse(s.begin() + i, s.begin() + i + k);
//				continue;
//			}
//
//			//reverse(s.begin() + i, s.begin() + s.size());
//			reverse(s.begin() + i, s.end());
//		}
//		return s;
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