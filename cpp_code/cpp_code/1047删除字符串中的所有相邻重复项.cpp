//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <string>
//#include <stack>
//
//
//
//class Solution
//{
//	//核心思想：
//public:
//	std::string removeDuplicates(std::string S)
//	{
//		std::stack<char> st;
//		for (char s : S)
//		{
//			if (st.empty() || st.top() != s)
//			{
//				st.push(s);
//			}
//			else
//			{
//				st.pop();//与其相等的情况，相同的两个都不需要了
//			}
//		}
//		std::string result;
//		while (!st.empty())
//		{
//			result += st.top();
//			st.pop();
//		}
//		//反转一下
//		reverse(result.begin(), result.end());
//		return result;
//	}
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