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
//	//����˼�룺ɨ��ǰ��������ţ���ջ����Ӷ�Ӧ��������
//	//������������ʱ����Ӧƥ�䲢ɾ��ջ��Ԫ��
//	//�������ַ���������֮��ջ�ǿյģ���˵��ȫ��ƥ����
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