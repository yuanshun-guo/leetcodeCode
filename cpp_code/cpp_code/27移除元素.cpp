//#include <iostream>
//#include <vector>
//using namespace std;
//
////��slowָ����ָ����ֵ��Ŀ��ֵ�����ʱ������ָ�붼�ƶ�
////��slow������ȵ�ֵʱ��slow������fast����һ�񣬲���fast��ָ��ֵ�����ʱslow��ָ��ֵ��������и���
//
//class Solution
//{
//public:
//	int removeElement(vector<int>& nums, int val)
//	{
//		int slowIndex = 0;
//		for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++)
//		{
//			if (nums[fastIndex] != val)
//			{
//				nums[slowIndex++] = nums[fastIndex];
//			}
//		}
//		return slowIndex;
//	}
//};
//
//
//int main()
//{
//
//	system("pause");
//
//	return 0;
//
//}