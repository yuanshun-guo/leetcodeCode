#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution
{
public:
	vector<vector<int>> generateMatrix(int n)
	{
		vector<vector<int>> res(n, vector<int>(n, 0));
		int startx = 0, starty = 0; //每循环一圈的起始位置
		int loop = n / 2;  //需要循环的圈的次数
		int mid = n / 2;  //当n为奇数时，中间那个需要单独处理的元素
		int count = 1;  //用于赋值填空
		int offset = 1;
		int i, j;
		while (loop--)
		{
			i = startx;
			j = starty;

			//模拟循环一周

			//上行左到右
			for (j = starty; j < n - offset; j++) // n列n行
			{
				res[startx][j] = count++; //这里的startx用于控制每一圈的开始位置
			}

			//右侧上到下
			for (i = startx; i < n - offset; i++)
			{
				res[i][j] = count++;
			}

			//下面右到左
			for (; j > starty; j--)
			{
				res[i][j] = count++;
			}

			//左侧下到上
			for (; i > startx; i--)
			{
				res[i][j] = count++;
			}

			//第二圈开始
			startx++;
			starty++;

			//控制每圈每条边的长度
			offset += 1;
		}

		if (n % 2)
		{
			res[mid][mid] = count;
		}
		return res;
	}
};

int main()
{
	system("pause");
	return 0;
}