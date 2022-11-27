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
	std::vector<std::vector<int>> result;
	std::vector<int> path;

	//�ݹ麯��
	void backtracking(int targetSum, int k, int startIndex, int sum)
	{
		//��֦����
		if (sum > targetSum)
		{
			return; //���Ǽ���һ���� ���޶�
		}

		//��ֹ����
		if (path.size() == k)
		{
			if (sum == targetSum)
			{
				result.push_back(path);
			}
			return;
		}

		//�������
		for (int i = startIndex; i <= 9 - (k - path.size()) + 1; i++)
		{
			sum += i;
			path.push_back(i);
			backtracking(targetSum, k, i + 1, sum);
			sum -= i;
			path.pop_back(); // ����
		}
	}

public:
	std::vector<std::vector<int>> combinationSum3(int k, int n)
	{
		backtracking(n, k, 1, 0);
		return result;
	}

};


int main()
{
	system("pause");

	return 0;
}