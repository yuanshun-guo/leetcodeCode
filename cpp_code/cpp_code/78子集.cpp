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
	void backtracking(int startIndex, std::vector<int>& nums)
	{
		result.push_back(path); //�������·;�еĽڵ�

		//��ֹ������������Ҫ�ӣ���Ϊ��ʱҲ�Ѿ�����forѭ��������ʱ���ˣ�
		/*if (startIndex > nums.size())
		{
			return;
		}*/

		for (int i = startIndex; i < nums.size(); i++)
		{
			path.push_back(nums[i]);
			backtracking(i + 1, nums);
			path.pop_back();
		}
	}

public:
	std::vector<std::vector<int>> subsets(std::vector<int>& nums)
	{
		backtracking(0, nums);
		return result;
	};


	int main()
	{
		system("pause");

		return 0;
	}