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
//	//核心思想：扫描前面的左括号，向栈内添加对应的右括号
//	//当遇到右括号时，对应匹配并删除栈顶元素
//	//结束：字符串遍历完之后，栈是空的，就说明全都匹配了
//public:
//	bool isValid(std::string s)
//	{
//		std::stack<int> st;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == '(')
//			{
//				st.push(')');
//			}
//			else if (s[i] == '{')
//			{
//				st.push('}');
//			}
//			else if (s[i] == '[')
//			{
//				st.push(']');
//			}
//			else if (st.empty() || st.top() != s[i])
//			{
//				return false;
//			}
//			else
//			{
//				st.pop();
//			}
//		}
//		return st.empty();
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