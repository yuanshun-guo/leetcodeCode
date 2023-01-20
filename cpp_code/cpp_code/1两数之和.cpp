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
			//因为此时可能找到，那么auto就是int，如果找不到就是迭代器了，两者类型不一样（这个说法是错误的）
			//正确的说法：find返回的是迭代器哦，按照规范的应该写为 std::unordered_map<int, int>::iterator iter =  map.find(target - nums[i]);  所以下面用auto肯定是用来省事的
			auto iter = map.find(target - nums[i]);
			if (iter != map.end())
			{	
				//迭代器看作是指针
				return { iter->second, i };  //second要和下面添加的数据时的insert相对应
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