//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
///*
//void backtracking(����) {
//	if (��ֹ����) {
//		��Ž��;
//		return;
//	}
//
//	for (ѡ�񣺱��㼯����Ԫ�أ����нڵ㺢�ӵ��������Ǽ��ϵĴ�С��) {
//		����ڵ�;
//		backtracking(·����ѡ���б�); // �ݹ�
//		���ݣ�����������
//	}
//}
//*/
//class Soultion
//{
//private:
//
//	const std::string letterMap[10] = {
//		"", //0
//		"", //1
//		"abc", // 2
//		"def", // 3
//		"ghi", // 4
//		"jkl", // 5
//		"mno", // 6
//		"pqrs", // 7
//		"tuv", // 8
//		"wxyz", // 9
//
//	}
//
//	std::vector<std::string> result;
//	std::string s;
//
//	//�ݹ麯��
//	void backtracking(const string& digits, int index)
//	{
//		//��ֹ����
//		if (index == digits.size())
//		{
//			result.push_back(s);
//			return;
//		}
//
//		//ȡindexָ������֣��ҵ���Ӧ���ַ���
//		int digit = digits[index] - '0'; //������ĵ�������ת��Ϊint
//		std::string letters = letterMap[digit];
//		for (int i = 0; i < letters.size(); i++)
//		{
//			s.push_back(letters[i]);
//			backtracking(digits, index + 1);
//			s.pop_back();
//		}
//	}
//
//public:
//	std::vector<std::string> letterCombinations(string digits)
//	{
//		backtracking(digits, 0);
//		return result;
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