//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////核心思想：4 = 2 + 2，讲前两个，后两个先操作，再利用两数之和
//
//class Solution
//{
//public:
//	int fourSumCount(std::vector<int>& nums1, std::vector<int>& nums2, std::vector<int>& nums3, std::vector<int>& nums4)
//	{
//		std::unordered_map<int, int> umap;
//
//		//遍历前两个数组
//		for (int a : nums1)
//		{
//			for (int b : nums2)
//			{
//				umap[a + b]++; //??===>当取一个不存在的key值的value时：如果value为内置类型，其值将被初始化为0；如果value为自定义数据结构且用户定义了默认值则初始化为默认值，否则初始化为0。
//			}
//		}
//
//		int count = 0; //计数
//		for (int c : nums3)
//		{
//			for (int d : nums4)
//			{
//				if (umap.find(-(c + d)) != umap.end())
//				{
//					count += umap[-(c + d)];
//				}
//			}
//		}
//		return count;
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