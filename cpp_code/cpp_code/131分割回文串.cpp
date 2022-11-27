#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>

/*
void backtracking(����) {
	if (��ֹ����) {
		��Ž��;
		return;
	}

	for (ѡ�񣺱��㼯����Ԫ�أ����нڵ㺢�ӵ��������Ǽ��ϵĴ�С��) {
		����ڵ�;
		backtracking(·����ѡ���б�); // �ݹ�
		���ݣ�����������
	}
}
*/
class Soultion
{
private:
	std::vector<std::vector<std::string>> result;
	std::vector<std::string> path;

	//�жϻ�����
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

	//�ݹ麯��
	void backtracking(const string& s, int startIndex)
	{
		//��ֹ�����������ʼλ���Ѿ�����s�Ĵ�С��˵���Ѿ��ҵ���һ��ָ���ˣ�
		if (startIndex >= s.size())
		{
			result.push_back(path);
			return;
		}

		for (int i = startIndex; i < s.size()�� i++)
		{
			if (isPalindrom(s, startIndex, i)) //�ǻ��Ĵ�
			{
				//��ȡ[startIndex , i]��s�ֵ��Ӵ�
				std::string str = s.substr(startIndex, i - startIndex + 1);
				path.push_back(str);
			}
			else
			{
				//���������ֱ������
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