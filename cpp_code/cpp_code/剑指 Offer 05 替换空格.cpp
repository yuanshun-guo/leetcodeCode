//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////����˼�룺Ϊʲô�����������ǰ�����Ļ���Ҫ�����滻�ַ��Ƿ����ռԭ���ַ������⣬�����޸������ո���������������������ôӺ���ǰ�ı���������ȷ�������ĵ�һ���ո�֮���λ�ò������ã��˺�Ŀո���Ե��ƣ��ɴ˴ﵽ�滻��Ҫ��
//
//class Solution
//{
//public:
//	std::string replaceSpace(std::string s)
//	{
//		int count = 0;//ͳ�ƿո�ĸ���
//		int sOldSize = s.size();
//		for (int i = 0; i < sOldSize - 1; i++)
//		{
//			if (s[i] == ' ')
//			{
//				count++;
//			}
//		}
//
//		//��Ϸ��ʼ
//		//resize��������
//		s.resize(sOldSize + count * 2); //ԭ�ո�ռһ��λ�ã���%20ռ3��λ�ã�������ͳ�����
//		int sNewSize = s.size();
//		//�Ӻ���ǰ����
//		for (int i = sNewSize - 1, j = sOldSize - 1; j < i; i--, j--) //Ϊʲô�����������Ϊ���ݺ��������µĿ�ֵ�ں���
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
//				i -= 2;  //�����������ص����滹���ٻ��1�������ܹ����Ǽ�3
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