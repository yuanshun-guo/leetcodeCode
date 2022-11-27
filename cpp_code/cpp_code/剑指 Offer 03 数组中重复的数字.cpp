//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
////����˼�룺
///*������ĿҪ�����޸���������飬���ǿ��Դ���һ������Ϊn��1�ĸ������飬Ȼ����һ��ԭ�����ÿ�����ָ��Ƶ��������顣
//���ԭ�����б����Ƶ�������m����������Ƶ������������±�Ϊm��λ�á����������׾��ܷ����ĸ��������ظ��ġ�
//������Ҫ����һ�����飬�÷�����ҪO��n���ĸ����ռ䡣*/
//
//
////���ù�ϣ��ʱ�临�Ӷ� O(N)���ռ临�Ӷ� O(N)��
//class Solution
//{
//public:
//	int findRepeatNumber(vector<int>& nums)
//	{
//		unordered_map<int, bool> map;
//		for (int num : nums)
//		{
//			if (map[num])
//			{
//				return num;
//			}
//			map[num] = true;
//		}
//		return -1;
//	}
//
//};
//
//
////ԭ�ؽ�����ʱ�临�Ӷ� O(N)���ռ临�Ӷ� O(1)��
//class Solution1
//{
//public:
//	int findRepeatNumber(vector<int>& nums)
//	{
//		int i = 0;
//		while (i < nums.size())
//		{
//			if (nums[i] == i)
//			{
//				i++;
//				continue;
//			}
//			if (nums[nums[i]] == nums[i])
//			{
//				return nums[i];
//			}
//			swap(nums[i], nums[nums[i]]);
//		}
//		return -1;
//	}
//
//};
//
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}