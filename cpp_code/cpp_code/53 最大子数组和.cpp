#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums)
    {
        int result = INT32_MIN;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            count += nums[i];
            if (count > result)
            {
                result = count;
            }
            if (count <= 0)
            {
                count = 0;
            }
        }
        return result;
    }

};