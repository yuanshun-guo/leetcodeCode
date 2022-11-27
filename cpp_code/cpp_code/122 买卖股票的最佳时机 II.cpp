#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int maxProfit(std::vector<int>& prices)
    {
        int result = 0;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            result += max(0, (prices[i + 1] - prices[i]));
        }
        return result;
    }

};