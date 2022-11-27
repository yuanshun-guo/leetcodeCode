//#include <iostream>
//#include <vector>
//using namespace std;
//
////当slow指针所指的数值和目标值不相等时，快慢指针都移动
////当slow遇到相等的值时，slow不动，fast右移一格，并将fast所指的值代替此时slow所指的值，对其进行覆盖
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