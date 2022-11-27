//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
//class Solution
//{
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
//	{
//		unordered_set<int> result_set; //存放结果
//		
//		//在构造函数中可以直接实现vector转set
//		unordered_set<int> nums_set(nums1.begin(), nums1.end());
//
//		for (int num : nums2)
//		{
//			//find(key)  查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//			if (nums_set.find(num) != nums_set.end())  //说明找到了
//			{
//				result_set.insert(num);
//			}
//		}
//		//set转vector
//		return vector<int>(result_set.begin(), result_set.end());
//	}
//};
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}