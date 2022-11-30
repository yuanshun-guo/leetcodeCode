#include <iostream>
#include <vector>
using namespace std;

//��slowָ����ָ����ֵ��Ŀ��ֵ�����ʱ������ָ�붼�ƶ�
//��slow������ȵ�ֵʱ��slow������fast����һ�񣬲���fast��ָ��ֵ�����ʱslow��ָ��ֵ��������и���

class Solution
{
public:
	int removeElement(vector<int>& nums, int val)
	{
		int slowIndex = 0; //���ڼ���
        int fastIndex = 0;//����
		for (; fastIndex < nums.size(); fastIndex++) //fastIndex��һ��ȫ��
		{
			if (nums[fastIndex] != val)
			{
				nums[slowIndex] = nums[fastIndex];
                slowIndex++;
			}
		}
		return slowIndex;
	}

    int removeElement2(vector<int>& nums, int val) //����erase
    {
        for (vector<int>::iterator i = nums.begin(); i != nums.end();)
        {
            if (*i == val)
            {
                i = nums.erase(i); //��������eraseɾ��ĳ��Ԫ�غ󣬻᷵����һ��Ԫ�صĵ�����(Ҳ���൱��i++)
            }
            else
            {
                i++;
            }
        }
        return nums.size();
    }
};


int main()
{

	system("pause");

	return 0;

}