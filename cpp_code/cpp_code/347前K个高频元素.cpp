//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
////#include <deque>
//#include <string>
//#include <queue>
//
//
//
//class Solution
//{
//	//����˼�룺�����ȼ����к�С����
//public:
//
//	//����С���ѵķº���
//	class mycomparsion
//	{
//	public:
//		bool operator()(const std::pair<int, int>& lhs, const std::pair<int, int>& rhs)
//		{
//			return lhs.second > rhs.second;
//		}
//	};
//
//	
//	std::vector<int> topKFrequent(std::vector<int>& nums, int k)
//	{
//		//ͳ��Ԫ�س��ֵ�Ƶ��
//		std::unordered_map<int, int> map;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			map[nums[i]]++;
//		}
//
//		//����Ƶ����������python��lambda
//		//����һ��С���ѣ���СΪK
//		//priority_queue <int,vector<int>,greater<int> > q;
//		std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, mycomparsion> pri_que;
//
//		//����С����,����(���˶��е�����)
//		for (std::unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++)
//		{
//			pri_que.push(*it);
//			if (pri_que.size() > k)
//			{
//				pri_que.pop();  //ֻ��С����ÿ�ν���С��Ԫ�ص��������С��������۵Ĳ���ǰk�����Ԫ��
//			}
//		}
//
//		//�ҳ�ǰK����ƵԪ�أ��ٵ���
//		std::vector<int> result(k); //������k���ظ���ִ����ֵ��ʼ���Ķ���
//		for (int i = k - 1; i >= 0; i--)
//		{
//			result[i] = pri_que.top().first; //����Ҫ��top��ֵ����result�����ѽ��
//			pri_que.pop();
//		}
//		return result;
//
//	}
//
//	
//};
//
//
//
//int main()
//{
//
//	system("pause");
//
//	return 0;
//}
