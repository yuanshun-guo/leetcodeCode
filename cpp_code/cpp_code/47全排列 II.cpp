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
			// used[i - 1] == true��˵��ͬһ��֦nums[i - 1]ʹ�ù�
			// used[i - 1] == false��˵��ͬһ����nums[i - 1]ʹ�ù�
			// ���ͬһ����nums[i - 1]ʹ�ù���ֱ������
			if (i > 0 && nums[i] == nums[i - 1] && used[i- 1] == 0)
			{
				continue;
			}
			if (used[i] == 0)
			{
				path.push_back(nums[i]);
				used[i] = 1;
				backtracking(nums, used);
				used[i] = 0;
				path.pop_back();
			}
			
		}
	}

public:
	std::vector<std::vector<int>> permuteUnique(std::vector<int>& nums)
	{
		std::vector<int> used(nums.size(), 0);
		std::sort(nums.begin(), nums.end());
		backtracking(nums, used);
		return result;
	};


	int main()
	{
		system("pause");

		return 0;
	}