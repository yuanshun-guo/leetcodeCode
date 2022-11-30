#include <iostream>
#include <vector>
using namespace std;

//当slow指针所指的数值和目标值不相等时，快慢指针都移动
//当slow遇到相等的值时，slow不动，fast右移一格，并将fast所指的值代替此时slow所指的值，对其进行覆盖

class Solution
{
public:
	int removeElement(vector<int>& nums, int val)
	{
		int slowIndex = 0; //用于计数
        int fastIndex = 0;//用于
		for (; fastIndex < nums.size(); fastIndex++) //fastIndex是一个全程
		{
			if (nums[fastIndex] != val)
			{
				nums[slowIndex] = nums[fastIndex];
                slowIndex++;
			}
		}
		return slowIndex;
	}

    int removeElement2(vector<int>& nums, int val) //利用erase
    {
        for (vector<int>::iterator i = nums.begin(); i != nums.end();)
        {
            if (*i == val)
            {
                i = nums.erase(i); //容器调用erase删除某个元素后，会返回下一个元素的迭代器(也就相当于i++)
            }
            else
            {
                i++;
            }
        }
        return nums.size();
    }
};


int main()
{

	system("pause");

	return 0;

}