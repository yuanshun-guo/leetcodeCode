//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
//class Solution
//{	
//	//核心思想：移除收尾多余的空格-》将整个字符串反转-》将每个单词反转
//	//使用双指针来移除冗余空格
//
//	//先定义移除多余的空格（步骤：先去除所有空格并在相邻单词之间添加空格，快慢指针）
//	void removeExtraSpace(std::string& s)
//	{
//		int slow = 0;
//		for (int fast = 0; fast < s.size(); ++fast)
//		{
//			//遇到非空格就处理，即删除所有空格
//			if (s[fast] != ' ')
//			{
//				if (slow != 0) //给单词之间添加空格；；；不是第一个单词
//				{
//					s[slow++] = ' ';
//				}
//				while (fast < s.size() && s[fast] != ' ')
//				{
//					s[slow++] = s[fast++];
//				}
//			}
//		}
//		s.resize(slow);//slow的大小即为去除多余空格后的大小。
//
//	}
//
//
//	//再定义反转区间字符串
//	void reverse(std::string& s, int start, int end)
//	{
//		for (int i = start, j = end; i < j; i++, j--)
//		{
//			std::swap(s[i], s[j]);
//		}
//	}
//
//	//好戏开始
//	std::string reverseWord(std::string s)
//	{
//		removeExtraSpace(s);
//		reverse(s, 0, s.size() - 1);
//		int start = 0;
//		for (int i = 0; i <= s.size(); ++i) //注意i的取值
//		{
//			if (i == s.size() || s[i] == ' ')
//			{
//				reverse(s, start, i - 1);
//				start = i + 1;
//			}
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
//	//test();
//
//	system("pause");
//
//	return 0;
//}