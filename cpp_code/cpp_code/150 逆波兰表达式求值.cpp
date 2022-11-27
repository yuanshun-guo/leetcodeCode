//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <stack>
//#include <string>
//
////核心思想：
//
//class Solution
//{
//	//后缀表达式算法遇到数字则入栈；遇到算符则取出栈顶两个数字进行计算，并将结果压入栈中。
//public:
//	int evalRPN(std::vector<std::string>& tokens)
//	{
//		std::stack<int> st;
//		for (int i = 0; i < tokens.size(); i++)
//		{
//			if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
//			{
//				//运算符之前栈内肯定有值
//				//取出最新的两个数
//				int num1 = st.top();
//				st.pop();
//				int num2 = st.top();
//				st.pop();
//
//				if (tokens[i] == "+")
//				{
//					st.push(num2 + num1);
//				}
//				if (tokens[i] == "-")
//				{
//					st.push(num2 - num1);
//				}
//				if (tokens[i] == "*")
//				{
//					st.push(num2 * num1);
//				}
//				if (tokens[i] == "/")
//				{
//					st.push(num2 / num1);
//				}
//			}
//			else
//			{
//				//记得将 字符串 转化为整形int
//				st.push(stoi(tokens[i]));
//			}
//		}
//		//取出结果
//		int result = st.top();
//		st.pop();
//		return result;
//		
//	}
//
//};
//
//
//
//int main()
//{
//
//	system("pause");
//
//	return 0;
//}
