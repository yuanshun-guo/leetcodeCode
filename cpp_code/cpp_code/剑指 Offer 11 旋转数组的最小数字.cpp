//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////����˼�룺���ַ�
////ֻ���ұߵ�right���бȽ�
//
//class Solution
//{
//public:
//	int minArray(std::vector<int>& numbers)
//	{
//		int left = 0;
//		int right = numbers.size() - 1;
//		while (left < right)
//		{
//			int middle = (left + right) / 2;
//			if (numbers[middle] > numbers[right]) //˵�����ұ�
//			{
//				left = middle + 1;
//			}
//			else if (numbers[middle] < numbers[right]) //˵�������
//			{
//				right = middle;
//			}
//			else
//			{
//				right--;
//			}
//		}
//
//		//return numbers[left];
//		return numbers[right];
//		
//	}
//
//	
//};
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}