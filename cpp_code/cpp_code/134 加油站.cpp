#include <iostream>
#include <vector>
//using namespace std;

class Solution
{
	int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost)
	{
		//����˼�룺ÿ������վ��ʣ����rest[i]Ϊgas[i] - cost[i]��
		//i��0��ʼ�ۼ�rest[i]���ͼ�ΪcurSum��һ��curSumС���㣬˵��[0, i]���䶼������Ϊ��ʼλ�ã���ʼλ�ô�i + 1�����ٴ�0����curSum��
		int curSum = 0;
		int totalSum = 0;
		int start = 0;
		for (int i = 0; i < gas.size(); i++)
		{
			curSum += gas[i] - cost[i];
			totalSum += gas[i] - cost[i];
			if (curSum < 0) //���µ�һȦ��ʼ���ۼӵĺ�
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