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
//	//����˼�룺�Ƴ���β����Ŀո�-���������ַ�����ת-����ÿ�����ʷ�ת
//	//ʹ��˫ָ�����Ƴ�����ո�
//
//	//�ȶ����Ƴ�����Ŀո񣨲��裺��ȥ�����пո������ڵ���֮����ӿո񣬿���ָ�룩
//	void removeExtraSpace(std::string& s)
//	{
//		int slow = 0;
//		for (int fast = 0; fast < s.size(); ++fast)
//		{
//			//�����ǿո�ʹ�����ɾ�����пո�
//			if (s[fast] != ' ')
//			{
//				if (slow != 0) //������֮����ӿո񣻣������ǵ�һ������
//				{
//					s[slow++] = ' ';
//				}
//				while (fast < s.size() && s[fast] != ' ')
//				{
//					s[slow++] = s[fast++];
//				}
//			}
//		}
//		s.resize(slow);//slow�Ĵ�С��Ϊȥ������ո��Ĵ�С��
//
//	}
//
//
//	//�ٶ��巴ת�����ַ���
//	void reverse(std::string& s, int start, int end)
//	{
//		for (int i = start, j = end; i < j; i++, j--)
//		{
//			std::swap(s[i], s[j]);
//		}
//	}
//
//	//��Ϸ��ʼ
//	std::string reverseWord(std::string s)
//	{
//		removeExtraSpace(s);
//		reverse(s, 0, s.size() - 1);
//		int start = 0;
//		for (int i = 0; i <= s.size(); ++i) //ע��i��ȡֵ
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