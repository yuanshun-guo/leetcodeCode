//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//
//class Solution
//{
//public:
//	int minSubArrayLen(int target, vector<int>& nums)
//	{
//		int result = INT32_MAX;  //���������INT_MAX��INT_MIN�ֱ��ʾ�����С������������ͷ�ļ�limits.h�У�
//		int sum = 0; //�����ڵĺ�
//		int i = 0;  //������ʼ��
//		int subLength = 0;  //���ڳ���
//		for (int j = 0; j < nums.size(); j++)
//		{
//			sum += nums[j];
//			while (sum >= target)  //��Ϊsum��ʼֵΪ0���ܾ�С��s
//			{
//				subLength = (j - i + 1); //���������еĳ���
//				result = result < subLength ? result : subLength; //����ǰ�ĳ�����֮ǰ�ĳ��Ƚ��бȽ�
//				sum -= nums[i++];
//			}
//		}
//		//���result������û�б���ֵ����ô�ͷ���0
//		return result == INT32_MAX ? 0 : result;
//	}
//};
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}