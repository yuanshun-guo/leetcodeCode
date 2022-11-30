#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
        int size_nums = nums.size();
        if ((target > nums[size_nums - 1]) || (target < nums[0]))
        {
            return -1;
        }
        int right = size_nums;
        int left = 0;
        while(left < right)   //选择左闭右开[left, right) ，也就是说取值范围在left-->right-1，因此left不可能等于right
        {
            int mid = (right - left) / 2 + left;  //请注意我们是用中值进行的对比
            if (target < nums[mid])
            {
                right = mid; //由于选择的是左闭右开，所以接下来是[left, mid)  ,mid已经做过比较了
            }
            else if (target > nums[mid])
            {
                left = mid + 1; //接下来是[mid + 1, right)，mid已经做过比较了
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};


int main()
{

	system("pause");

	return 0;

}