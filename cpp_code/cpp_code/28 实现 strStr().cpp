//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
//
//
//class Solution
//{
//	//核心思想：如何构建前缀表next，建议看carl的视频和背诵
//public:
//	//设计前缀表
//	void getNext(std::vector<int>& next, const std::string& s)
//	{
//		int j = 0;
//		next[0] = 0;
//		for (int i = 1; i < s.size(); i++)
//		{
//			while (j > 0 && s[i] != s[j]) // 因为可能不只是回退一步
//			{
//				j = next[j - 1];
//			}
//			if (s[i] == s[j])
//			{
//				j++;
//			}
//			next[i] = j;
//		}
//	}
//
//	int strStr(std::string haystack, std::string needle) 
//	{
//		if (needle.size() == 0)
//		{
//			return 0;
//		}
//
//		std::vector<int> next(needle.size(), 0);
//		getNext(next, needle);
//
//		int j = 0;
//		for (int i = 1; i < haystack.size(); i++)
//		{
//			while (j > 0 && haystack[i] != needle[j])
//			{
//				j = next[j - 1];
//			}
//			if (haystack[i] == needle[j])
//			{
//				j++;
//			}
//			if (j == needle.size()) //就是说到最后了
//			{
//				return (i - needle.size() + 1);  //这就是回到匹配的第一个位置
//			}
//		}
//		return -1;
//
//	}
//
//
//};
//
//
//int main()
//{
//	//test();
//
//	system("pause");
//
//	return 0;
//}