//#include <iostream>
//#include <vector>
//#include <limits.h>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<vector<int>> generateMatrix(int n)
//	{
//		vector<vector<int>> res(n, vector<int>(n, 0));
//		int startx = 0, starty = 0;
//		int loop = n / 2;
//		int mid = n / 2;
//		int count = 1;
//		int offset = 1;
//		int i, j;
//		while (loop--)
//		{
//			i = startx;
//			j = starty;
//
//			//ģ��ѭ��һ��
//
//			//��������
//			for (j = starty; j < n - offset; j++) // n��n��
//			{
//				res[startx][j] = count++;
//			}
//
//			//�Ҳ��ϵ���
//			for (i = startx; i < n - offset; i++)
//			{
//				res[i][j] = count++;
//			}
//
//			//�����ҵ���
//			for (; j > starty; j--)
//			{
//				res[i][j] = count++;
//			}
//
//			//����µ���
//			for (; i > startx; i--)
//			{
//				res[i][j] = count++;
//			}
//
//			//�ڶ�Ȧ��ʼ
//			startx++;
//			starty++;
//
//			//����ÿȦÿ���ߵĳ���
//			offset += 1;
//		}
//
//		if (n % 2)
//		{
//			res[mid][mid] = count;
//		}
//		return res;
//	}
//	
//};
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}