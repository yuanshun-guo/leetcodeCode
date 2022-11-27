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
	std::vector<std::string> result;

	//判断子串是否合法
		/*主要考虑到如下三点：
		段位以 0 为开头的数字不合法
		段位里有非正整数字符不合法
		段位如果大于 255 了不合法*/
	bool isValid(const string& s, int start, int end)
	{
		if (start > end)
		{
			return false;
		}
		if (s[start] == '0' && start != end)
		{
			return false;
		}
		int num = 0;
		for (int i = start; i <= end; i++)
		{
			if (s[i] > '9' || s[i] < '0')
			{
				return false;
			}
			num = num * 10 + (s[i] - '0');
			if (num > 255)
			{
				return false;
			}
		}
		return true;
	}

	//递归函数
	void backtracking(string& s, int startIndex, int pointNum)
	{
		//终止条件
		/*pointNum 表示逗点数量， pointNum 为 3 说明字符串分成了 4 段了。
		然后验证一下第四段是否合法，如果合法就加入到结果集里*/
		if (pointNum == 3)
		{
			if (isValid(s, startIndex, s.size() - 1))
			{
				result.push_back(s);
			}
			return;
		}

		//遍历
		for (int i = startIndex; i < s.size(); i++)
		{
			if (isValid(s, startIndex, i))
			{
				s.insert(s.begin() + i + 1, '.');
				pointNum++;
				backtracking(s, i + 2, pointNum);
				pointNum--;
				s.erase(s.begin() + i + 1);
			}
			else
			{
				break; //不合法
			}
		}

	}

public:
	std::vector<std::string> restoreIpAddresses(string s)
	{
		if (s.size() > 12)
		{
			return result;
		}
		backtracking(s, 0, 0);
		return result;
	}


};


int main()
{
	system("pause");

	return 0;
}