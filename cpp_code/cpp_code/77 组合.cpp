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

class Solution
{
private:
	//���ݺ������ݹ麯����
	std::vector<std::vector<int>> result;
	std::vector<int> path;

	void backtracking(int n, int k, int startIndex)
	{
		//��ȱ�������ֹ
		if (path.size() == k)
		{
			result.push_back(path);
			return;
		}
		for (int i = startIndex; i <= n - (k - path.size()) + 1; i++) //�����˼�֦
		{
			path.push_back(i);// ����ڵ�
			backtracking(n, k, i + 1); //������i++��++i
			path.pop_back();//����
		}
	}

public:
	std::vector<std::vector<int>> combine(int n, int k)
	{
		backtracking(n, k, 1);
		return result;
	}

};



int main()
{
	system("pause");

	return 0;
}