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
//	//����˼�룺����һ���������С�����С���������ڶ��к��棬�������������ɾ����������������
//
//private:
//	//��������
//	class MyQueue
//	{
//	public:
//		std::deque<int> que;
//
//		//�������в�Ҫ��ֵ
//		
//		void pop(int value)
//		{
//			//ÿ�ε�����ʱ�򣬱Ƚϵ�ǰҪ��������ֵ�Ƿ���ڶ��г���Ԫ�ص���ֵ���������򵯳���(����ȣ�˵����֮ǰ��ͱ�����ɾ���˻����ڵ�һ��Ԫ�صĺ���)
//			if (!que.empty() && value == que.front())
//			{
//				que.pop_front();
//			}
//		}
//
//		//�������һ����������������Ԫ��
//		void push(int value)
//		{
//			while (!que.empty() && value > que.back()) //�ǿգ��Ҹ�ֵ���ڵ������к������
//			{
//				que.pop_back();
//			}
//			//��Ϊ�ջ��߶������������ûvalue��
//			que.push_back(value);
//		}
//
//		//��ѯ��ǰ����������ֵ
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
//		//��ʼʱ����ǰk����������
//		for (int i = 0; i < k; i++)
//		{
//			que.push(nums[i]);
//		}
//
//		//�������һ���
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
