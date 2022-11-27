#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>

/*
void backtracking(参数) {
	if (终止条件) {
		存放结果;
		return;
	}

	for (选择：本层集合中元素（树中节点孩子的数量就是集合的大小）) {
		处理节点;
		backtracking(路径，选择列表); // 递归
		回溯，撤销处理结果
	}
}
*/
class Soultion
{
private:
	std::vector<std::vector<std::string>> result;
	std::vector<std::string> path;

	//判断回文数
	bool isPalindrom(const string& s, int start, int end)
	{
		for (int i = start, j = end; i < j; i++, j--)
		{
			if (s[i] != s[j])
			{
				return false;
			}
		}
		return true;
	}

	//递归函数
	void backtracking(const string& s, int startIndex)
	{
		//终止条件（如果起始位置已经大于s的大小，说明已经找到了一组分割方案了）
		if (startIndex >= s.size())
		{
			result.push_back(path);
			return;
		}

		for (int i = startIndex; i < s.size()； i++)
		{
			if (isPalindrom(s, startIndex, i)) //是回文串
			{
				//获取[startIndex , i]在s种的子串
				std::string str = s.substr(startIndex, i - startIndex + 1);
				path.push_back(str);
			}
			else
			{
				//如果不是则直接跳过
				continue;
			}
			backtracking(s, i + 1);
			path.pop_back();
		}
	}
 
public:
	std::vector<std::vector<std::string>> partition(std::string s)
	{
		backtracking(s, 0);
		return result;
	}


};


int main()
{
	system("pause");

	return 0;
}