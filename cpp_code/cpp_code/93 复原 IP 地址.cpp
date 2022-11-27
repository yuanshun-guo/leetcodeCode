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
	std::vector<std::string> result;

	//�ж��Ӵ��Ƿ�Ϸ�
		/*��Ҫ���ǵ��������㣺
		��λ�� 0 Ϊ��ͷ�����ֲ��Ϸ�
		��λ���з��������ַ����Ϸ�
		��λ������� 255 �˲��Ϸ�*/
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

	//�ݹ麯��
	void backtracking(string& s, int startIndex, int pointNum)
	{
		//��ֹ����
		/*pointNum ��ʾ���������� pointNum Ϊ 3 ˵���ַ����ֳ��� 4 ���ˡ�
		Ȼ����֤һ�µ��Ķ��Ƿ�Ϸ�������Ϸ��ͼ��뵽�������*/
		if (pointNum == 3)
		{
			if (isValid(s, startIndex, s.size() - 1))
			{
				result.push_back(s);
			}
			return;
		}

		//����
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
				break; //���Ϸ�
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