#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        int index = s.size() - 1;
        int result = 0;
        for (int i = g.size() - 1; i >= 0; i--)
        {
            if (index >= 0 && s[index] >= g[i])
            {
                result++;
                index--;
            }
        }
        return result;
    }
};