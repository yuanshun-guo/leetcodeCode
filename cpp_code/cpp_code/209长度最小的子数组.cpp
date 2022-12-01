#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution
{
public:
	int minSubArrayLen(int target, vector<int>& nums)
	{
		int result = INT32_MAX;  //���������INT_MAX��INT_MIN�ֱ��ʾ�����С������������ͷ�ļ�limits.h�У�
		int sum = 0; //�����ڵĺ�
		int i = 0;  //������ʼ��
		int subLength = 0;  //���ڳ���
		for (int j = 0; j < nums.size(); j++)
		{
			sum += nums[j];
			while (sum >= target)  //��Ϊsum��ʼֵΪ0���ܾ�С��s  
			{
				subLength = (j - i + 1); //���������еĳ���
				result = result < subLength ? result : subLength; //����ǰ�ĳ�����֮ǰ�ĳ��Ƚ��бȽ�
                // result = min(result, j - i + 1);
				sum -= nums[i++]; //ţ�� ������Ϊʲôʹ��while����Ϊ����i++����ܻ���sum>=target��
			}
		}
		//���result������û�б���ֵ����ô�ͷ���0
		return result == INT32_MAX ? 0 : result;
	}




    //�����ⷨ���ں��ദ�״�㣩
    int minSubArrayLen2(int target, vector<int>& nums)
    {
        int result = INT32_MAX;
        if (nums.size() == 0)
        {
            return 0;
        }
        for (int slowIndex = 0; slowIndex < nums.size(); slowIndex++)
        {
            int sum = 0; //��������0�����治���׳���
            for (int fastIndex = slowIndex; fastIndex < nums.size(); fastIndex++)
            {
                sum += nums[fastIndex];  //��ΪfastIndex�Ǵ�slowIndex��ʼ���㣬���������ж�
                if (sum >= target)
                {
                    result = min(result, fastIndex - slowIndex + 1);  //ֱ�����±�������ɣ��������ö������ʱֵ
                    break;
                }
            }
        }
        return result == INT32_MAX ? 0: result;
    }
};

int main()
{
	system("pause");

	return 0;
}