//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
//class Solution {
//public:
//    //只能说有些难
//    void getNext(std::vector<int>& next, const std::string& s) {
//        next[0] = 0;
//        int j = 0;
//        for (int i = 1; i < s.size(); i++) {
//            while (j > 0 && s[i] != s[j]) {
//                j = next[j - 1];
//            }
//            if (s[i] == s[j]) {
//                j++;
//            }
//            next[i] = j;
//        }
//    }
//    bool repeatedSubstringPattern(std::string s) 
//    {
//        if (s.size() == 0) 
//        {
//            return false;
//        }
//        std::vector<int> next(s.size(), 0);
//        getNext(next, s);
//        int len = s.size();
//        //(数组长度-最长相等前后缀的长度) 正好可以被 数组的长度整除，说明有该字符串有重复的子字符串。
//        if (next[len - 1] != 0 && len % (len - (next[len - 1])) == 0) 
//        {
//            return true;
//        }
//        return false;
//    }
//};