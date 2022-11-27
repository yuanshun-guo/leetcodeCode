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
	void backtracking(std::vector<int>& nums, int startIndex, int used)
	{
		//��ֹ����
		if (path.size() > 1) // ��������
		{
			result.push_back(path);
			//���ﲻ��Ҫreturn����ΪҪȡ���ϵ����нڵ�
		}

		//����ʹ������������ȥ�ز�������Ŀ˵�ķ�Χ��[-100, 100]
		int used[201] = { 0 };

		for (int i = startIndex; i < nums.size(); i++)
		{
			if ((!path.empty() && nums[i] < path.back()) || used[nums[i] + 100] == 1) // ȥ��
			{
				continue;
			}
			used[nums[i] + 100] = 1;
			path.push_back(nums[i]);
			backtracking(nums, i + 1);
			path.pop_back();
		}
	}

public:
	std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums)
	{
		backtracking(nums, 0);
		return result;
	};


	int main()
	{
		system("pause");

		return 0;
	}