//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////����˼�룺4 = 2 + 2����ǰ�������������Ȳ���������������֮��
//
//class Solution
//{
//public:
//	int fourSumCount(std::vector<int>& nums1, std::vector<int>& nums2, std::vector<int>& nums3, std::vector<int>& nums4)
//	{
//		std::unordered_map<int, int> umap;
//
//		//����ǰ��������
//		for (int a : nums1)
//		{
//			for (int b : nums2)
//			{
//				umap[a + b]++; //??===>��ȡһ�������ڵ�keyֵ��valueʱ�����valueΪ�������ͣ���ֵ������ʼ��Ϊ0�����valueΪ�Զ������ݽṹ���û�������Ĭ��ֵ���ʼ��ΪĬ��ֵ�������ʼ��Ϊ0��
//			}
//		}
//
//		int count = 0; //����
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