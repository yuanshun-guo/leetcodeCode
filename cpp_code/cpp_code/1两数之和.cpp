#include <iostream>
#include <vector>
#include <limits.h>
// using namespace std;
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>

class Solution
{
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target)
	{
		std::unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++)
		{	
			//��Ϊ��ʱ�����ҵ�����ôauto����int������Ҳ������ǵ������ˣ��������Ͳ�һ�������˵���Ǵ���ģ�
			//��ȷ��˵����find���ص��ǵ�����Ŷ�����չ淶��Ӧ��дΪ std::unordered_map<int, int>::iterator iter =  map.find(target - nums[i]);  ����������auto�϶�������ʡ�µ�
			auto iter = map.find(target - nums[i]);
			if (iter != map.end())
			{	
				//������������ָ��
				return { iter->second, i };  //secondҪ��������ӵ�����ʱ��insert���Ӧ
				//return { (*iter).second, i };
			}
			map.insert(std::pair<int, int>(nums[i], i));
		}
		return {};
	}
};


int main()
{
	system("pause");

	return 0;
}