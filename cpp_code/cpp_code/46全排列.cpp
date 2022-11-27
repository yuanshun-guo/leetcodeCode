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
	void backtracking(std::vector<int>& nums, std::vector<int>& used)
	{
		//��ֹ����
		if (path.size() == nums.size())
		{
			result.push_back(path);
			return;
		}

		for (int i = 0; i < nums.size(); i++)
		{
			if (used[i] == 1)
			{
				continue;
			}
			path.push_back(nums[i]);
			used[i] = 1;
			backtracking(nums, used);
			used[i] = 0;
			path.pop_back();
		}
	}

public:
	std::vector<std::vector<int>> permute(std::vector<int>& nums)
	{
		std::vector<int> used(nums.size(), 0);
		backtracking(nums, used);
		return result;
	};
};

int main()
{
	system("pause");
	return 0;
}