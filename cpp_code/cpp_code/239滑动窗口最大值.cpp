//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <deque>
//#include <string>
//
//
//
//class Solution
//{
//	//核心思想：构建一个单调队列。遇到小的数，加在队列后面，遇到更大的数，删除队列中所有数据
//
//private:
//	//单调队列
//	class MyQueue
//	{
//	public:
//		std::deque<int> que;
//
//		//弹出队列不要的值
//		
//		void pop(int value)
//		{
//			//每次弹出的时候，比较当前要弹出的数值是否等于队列出口元素的数值，如果相等则弹出。(不相等，说明在之前早就被队列删除了或者在第一个元素的后面)
//			if (!que.empty() && value == que.front())
//			{
//				que.pop_front();
//			}
//		}
//
//		//窗口向右滑动，往队列里添加元素
//		void push(int value)
//		{
//			while (!que.empty() && value > que.back()) //非空，且该值大于单调队列后面的数
//			{
//				que.pop_back();
//			}
//			//若为空或者队列里面的数都没value大
//			que.push_back(value);
//		}
//
//		//查询当前队列里的最大值
//		int front()
//		{
//			return que.front();
//		}
//	};
//	
//public:
//	std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k)
//	{
//		MyQueue que;
//		std::vector<int> result;
//		//初始时，将前k项放入队列中
//		for (int i = 0; i < k; i++)
//		{
//			que.push(nums[i]);
//		}
//
//		//窗口向右滑动
//		result.push_back(que.front());
//
//		for (int i = k; i < nums.size(); i++)
//		{
//			que.pop(nums[i - k]);
//			que.push(nums[i]);
//			result.push_back(que.front());
//		}
//		return result;
//		
//	}
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
