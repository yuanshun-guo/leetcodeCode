//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <algorithm>
//
//class Solution {
//public:
//    int jump(std::vector<int>& nums)
//    {
//        if (nums.size() == 1)
//        {
//            return 0;
//        }
//        int curDistance = 0;
//        int nextDistace = 0;
//        int ans = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            nextDistace = max(nextDistace, i + nums[i]);
//            if (i == curDistance)
//            {
//                if (curDistance != nums.size() - 1)
//                {
//                    ans++;
//                    curDistance = nextDistace;
//                    if (nextDistace >= nums.size() - 1)
//                    {
//                        break;
//                    }
//                }
//                else
//                {
//                    break;
//                }
//            }
//        }
//        return ans;
//    }
//
//};