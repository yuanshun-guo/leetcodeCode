//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////核心思想：用数组 非 字典
//
//class Solution
//{
//public:
//	bool canConstruct(std::string ransomNote, std::string magazine)
//	{
//		int record[26] = { 0 };
//
//		//特殊判断
//		if (ransomNote.size() > magazine.size())
//		{
//			return false;
//		}
//		for (int i = 0; i < magazine.size(); i++)
//		{
//			record[magazine[i] - 'a']++;
//		}
//		for (int j = 0; j < ransomNote.size(); j++)
//		{
//			record[ransomNote[j] - 'a']--;
//			if (record[ransomNote[j] - 'a'] < 0)
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//};
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}