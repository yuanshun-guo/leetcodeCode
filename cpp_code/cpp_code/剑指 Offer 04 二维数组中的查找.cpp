//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
///*核心思想：
//首先选取数组中左下角的数字。
//如果该数字等于要查找的数字，则查找过程结束；
//如果该数字大于要查找的数字，则往上一行找；
//如果该数字小于要查找的数字，则往又一列找。
//也就是说，如果要查找的数字不在数组的左下角，则每一次都在数组的查找范围中剔除一行或者一列，
//这样每一步都可以缩小查找的范围，直到找到要查找的数字，或者查找范围为空。*/
//
//
//
//
//class Solution
//{
//public:
//	bool findNumberIn2DArray(std::vector<std::vector<int>>& matrix, int target)
//	{
//		int i = matrix.size() - 1; //起始行数
//		int j = 0; // 起始列
//		while (i >= 0 && j < matrix[0].size())
//		{
//			if (matrix[i][j] > target)
//			{
//				i--;
//			}
//			else if (matrix[i][j] < target)
//			{
//				j++;
//			}
//			else
//			{
//				return true;
//			}
//		}
//		return false;
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