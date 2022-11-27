#include <iostream>
#include <vector>
//using namespace std;

class Solution
{
	int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost)
	{
		//核心思想：每个加油站的剩余量rest[i]为gas[i] - cost[i]。
		//i从0开始累加rest[i]，和记为curSum，一旦curSum小于零，说明[0, i]区间都不能作为起始位置，起始位置从i + 1算起，再从0计算curSum。
		int curSum = 0;
		int totalSum = 0;
		int start = 0;
		for (int i = 0; i < gas.size(); i++)
		{
			curSum += gas[i] - cost[i];
			totalSum += gas[i] - cost[i];
			if (curSum < 0) //从新的一圈开始的累加的和
			{
				start = i + 1;
				curSum = 0;
			}
		}
		if (totalSum < 0)
		{
			return -1;
		}
		return start;

	}
};