//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
///*����˼�룺
//����ѡȡ���������½ǵ����֡�
//��������ֵ���Ҫ���ҵ����֣�����ҹ��̽�����
//��������ִ���Ҫ���ҵ����֣�������һ���ң�
//���������С��Ҫ���ҵ����֣�������һ���ҡ�
//Ҳ����˵�����Ҫ���ҵ����ֲ�����������½ǣ���ÿһ�ζ�������Ĳ��ҷ�Χ���޳�һ�л���һ�У�
//����ÿһ����������С���ҵķ�Χ��ֱ���ҵ�Ҫ���ҵ����֣����߲��ҷ�ΧΪ�ա�*/
//
//
//
//
//class Solution
//{
//public:
//	bool findNumberIn2DArray(std::vector<std::vector<int>>& matrix, int target)
//	{
//		int i = matrix.size() - 1; //��ʼ����
//		int j = 0; // ��ʼ��
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