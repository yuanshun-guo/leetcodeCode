//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////核心思想：为什么后序遍历：从前遍历的话，要考虑替换字符是否会抢占原来字符的问题，例如修改两个空格的情况，这样会出错。而采用从后向前的遍历，可以确保碰到的第一个空格之后的位置不会乱用，此后的空格可以递推，由此达到替换的要求
//
//class Solution
//{
//public:
//	std::string replaceSpace(std::string s)
//	{
//		int count = 0;//统计空格的个数
//		int sOldSize = s.size();
//		for (int i = 0; i < sOldSize - 1; i++)
//		{
//			if (s[i] == ' ')
//			{
//				count++;
//			}
//		}
//
//		//好戏开始
//		//resize扩充数组
//		s.resize(sOldSize + count * 2); //原空格占一个位置，现%20占3个位置，再想想就出来了
//		int sNewSize = s.size();
//		//从后向前遍历
//		for (int i = sNewSize - 1, j = sOldSize - 1; j < i; i--, j--) //为什么后序遍历，因为扩容后的数组的新的空值在后面
//		{
//			if (s[j] != ' ')
//			{
//				s[i] = s[j];
//			}
//			else
//			{
//				s[i] = '0';
//				s[i - 1] = '2';
//				s[i - 2] = '%';
//				i -= 2;  //多跑两步，回到上面还是再会减1，所以总共就是减3
//			}
//		}
//		return s;
//	}
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