#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    bool canJump(std::vector<int>& nums)
    {
        int cover = 0;
        if (nums.size() == 1)
        {
            return true;
        }
        for (int i = 0; i <= cover; i++)
        {
            cover = max(cover, i + nums[i]);
            if (cover >= nums.size() - 1)
            {
                return true;
            }
        }
        return false;
    }

};