//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <stack>
//#include <string>
//
////����˼�룺
//
//class Solution
//{
//	//��׺���ʽ�㷨������������ջ�����������ȡ��ջ���������ֽ��м��㣬�������ѹ��ջ�С�
//public:
//	int evalRPN(std::vector<std::string>& tokens)
//	{
//		std::stack<int> st;
//		for (int i = 0; i < tokens.size(); i++)
//		{
//			if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
//			{
//				//�����֮ǰջ�ڿ϶���ֵ
//				//ȡ�����µ�������
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
//				//�ǵý� �ַ��� ת��Ϊ����int
//				st.push(stoi(tokens[i]));
//			}
//		}
//		//ȡ�����
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
