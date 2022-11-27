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
	void backtracking(std::vector<int>& nums, int startIndex, std::vector<int>& used)
	{
		result.push_back(path); //�������·;�еĽڵ�

		//used[i - 1] == 1; ˵��ͬһ��֦ nums[i - 1]ʹ�ù�
		//used[i - 1] == 0; ˵��ͬһ���� nums[i - 1]ʹ�ù�

		for (int i = startIndex; i < nums.size(); i++)
		{
			if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == 0)
			{
				continue;
			}
			path.push_back(nums[i]);
			used[i] = 1;
			backtracking(nums, i + 1, used);
			used[i] = 0;
			path.pop_back();
		}
	}

public:
	std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums)
	{
		std::vector<int> used(nums.size(), 0);
		std::sort(nums.begin(), nums.end());
		backtracking(nums, 0, used);
		return result;
	};


	int main()
	{
		system("pause");

		return 0;
	}