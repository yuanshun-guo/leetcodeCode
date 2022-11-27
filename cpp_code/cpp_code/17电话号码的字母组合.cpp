//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
///*
//void backtracking(参数) {
//	if (终止条件) {
//		存放结果;
//		return;
//	}
//
//	for (选择：本层集合中元素（树中节点孩子的数量就是集合的大小）) {
//		处理节点;
//		backtracking(路径，选择列表); // 递归
//		回溯，撤销处理结果
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
//	//递归函数
//	void backtracking(const string& digits, int index)
//	{
//		//终止条件
//		if (index == digits.size())
//		{
//			result.push_back(s);
//			return;
//		}
//
//		//取index指向的数字，找到对应的字符集
//		int digit = digits[index] - '0'; //将输入的单个数字转化为int
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