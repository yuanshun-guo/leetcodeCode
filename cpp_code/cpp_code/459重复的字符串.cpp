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
//    //ֻ��˵��Щ��
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
//        //(���鳤��-����ǰ��׺�ĳ���) ���ÿ��Ա� ����ĳ���������˵���и��ַ������ظ������ַ�����
//        if (next[len - 1] != 0 && len % (len - (next[len - 1])) == 0) 
//        {
//            return true;
//        }
//        return false;
//    }
//};