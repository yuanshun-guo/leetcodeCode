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
//	//����˼�룺
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
//				st.pop();//������ȵ��������ͬ������������Ҫ��
//			}
//		}
//		std::string result;
//		while (!st.empty())
//		{
//			result += st.top();
//			st.pop();
//		}
//		//��תһ��
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