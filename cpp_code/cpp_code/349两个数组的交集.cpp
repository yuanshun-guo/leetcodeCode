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
//		unordered_set<int> result_set; //��Ž��
//		
//		//�ڹ��캯���п���ֱ��ʵ��vectorתset
//		unordered_set<int> nums_set(nums1.begin(), nums1.end());
//
//		for (int num : nums2)
//		{
//			//find(key)  ����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//			if (nums_set.find(num) != nums_set.end())  //˵���ҵ���
//			{
//				result_set.insert(num);
//			}
//		}
//		//setתvector
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