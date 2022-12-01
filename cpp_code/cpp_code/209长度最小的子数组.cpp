#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution
{
public:
	int minSubArrayLen(int target, vector<int>& nums)
	{
		int result = INT32_MAX;  //结果（常量INT_MAX和INT_MIN分别表示最大、最小整数，定义在头文件limits.h中）
		int sum = 0; //窗口内的和
		int i = 0;  //窗口起始点
		int subLength = 0;  //窗口长度
		for (int j = 0; j < nums.size(); j++)
		{
			sum += nums[j];
			while (sum >= target)  //因为sum初始值为0可能就小于s  
			{
				subLength = (j - i + 1); //更新子序列的长度
				result = result < subLength ? result : subLength; //将当前的长度与之前的长度进行比较
                // result = min(result, j - i + 1);
				sum -= nums[i++]; //牛的 （至于为什么使用while，因为这里i++后可能还会sum>=target）
			}
		}
		//如果result从来就没有被赋值，那么就返回0
		return result == INT32_MAX ? 0 : result;
	}




    //暴力解法（内含多处易错点）
    int minSubArrayLen2(int target, vector<int>& nums)
    {
        int result = INT32_MAX;
        if (nums.size() == 0)
        {
            return 0;
        }
        for (int slowIndex = 0; slowIndex < nums.size(); slowIndex++)
        {
            int sum = 0; //这是设置0，下面不容易出错
            for (int fastIndex = slowIndex; fastIndex < nums.size(); fastIndex++)
            {
                sum += nums[fastIndex];  //因为fastIndex是从slowIndex开始计算，所以无需判断
                if (sum >= target)
                {
                    result = min(result, fastIndex - slowIndex + 1);  //直接用下标相减即可，无需设置额外的临时值
                    break;
                }
            }
        }
        return result == INT32_MAX ? 0: result;
    }
};

int main()
{
	system("pause");

	return 0;
}