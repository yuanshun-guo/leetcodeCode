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
//	//核心思想：用优先级队列和小顶堆
//public:
//
//	//定义小顶堆的仿函数
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
//		//统计元素出现的频率
//		std::unordered_map<int, int> map;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			map[nums[i]]++;
//		}
//
//		//根据频率排序，类似python的lambda
//		//定义一个小顶堆，大小为K
//		//priority_queue <int,vector<int>,greater<int> > q;
//		std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, mycomparsion> pri_que;
//
//		//遍历小顶堆,迭代(单端队列的性质)
//		for (std::unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++)
//		{
//			pri_que.push(*it);
//			if (pri_que.size() > k)
//			{
//				pri_que.pop();  //只有小顶堆每次将最小的元素弹出，最后小顶堆里积累的才是前k个最大元素
//			}
//		}
//
//		//找出前K个高频元素，再倒序
//		std::vector<int> result(k); //包含了k个重复地执行了值初始化的对象
//		for (int i = k - 1; i >= 0; i--)
//		{
//			result[i] = pri_que.top().first; //就是要将top的值放在result的最后呀！
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
