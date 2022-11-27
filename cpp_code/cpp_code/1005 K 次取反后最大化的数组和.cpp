#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>
#include <algorithm>

class Solution {
static bool cmp(int a, int b)
{
    return abs(a) > abs(b);
}
public:
    int largestSumAfterKNegations(std::vector<int>& nums, int k)
    {
        std::sort(nums.begin(), nums.end(), cmp);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0 && k > 0)
            {
                nums[i] *= -1;
                k--;
            }
        }
        if (k % 2 == 1)
        {
            nums[nums.size() - 1] *= -1;
        }
        //ÇóºÍ
        int result = 0;
        for (int num : nums)
        {
            result += num;
        }
        return result;
    }

};