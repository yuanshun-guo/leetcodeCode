//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
////����˼�룺˫ָ��
///*���Ƚ���������Ȼ����һ��forѭ����i���±�0�ĵط���ʼ��ͬʱ��һ���±�left ������i+1��λ���ϣ������±�right �������β��λ���ϡ�
//ʹ��a + b +c =0�����������൱�� a = nums[i]��b = nums[left]��c = nums[right]��
//���nums[i] + nums[left] + nums[right] > 0 ��˵�� ��ʱ����֮�ʹ��ˣ���Ϊ������������ˣ�����right�±��Ӧ�������ƶ�����������������֮��СһЩ��
//��� nums[i] + nums[left] + nums[right] < 0 ˵�� ��ʱ ����֮��С�ˣ�left �������ƶ�������������֮�ʹ�һЩ��ֱ��left��right����Ϊֹ��*/
//
//class Solution
//{
//public:
//	std::vector<std::vector<int>> threeSum(std::vector<int>& nums)
//	{
//		std::vector<std::vector<int>> result;
//		//������
//		sort(nums.begin(), nums.end());
//		// a = nums[i], b = nums[left], c = nums[right]
//		for (int i = 0; i < nums.size(); i++)
//		{
//			//��һ��������0���Ǿ�ûϷ��
//			if (nums[i] > 0)
//			{
//				return result;
//			}
//
//			//��ȷȥ��
//			if (i > 0 && nums[i] == nums[i - 1])
//			{
//				continue;
//			}
//
//			//��Ϸ��ʼ
//			int left = i + 1;
//			int right = nums.size() - 1;
//			while (right > left)
//			{
//				if (nums[i] + nums[left] + nums[right] > 0)
//				{
//					right--;
//				}
//				else if (nums[i] + nums[left] + nums[right] < 0)
//				{
//					left++;
//				}
//				else
//				{
//					result.push_back(std::vector<int>{nums[i], nums[left], nums[right]});
//					while (right > left && nums[right] == nums[right - 1])
//					{
//						right--;
//					}
//					while (right > left && nums[left] == nums[left + 1])
//					{
//						left++;
//					}
//
//					//�ҵ���
//					right--;
//					left++;
//				}
//			}
//
//		}
//		return result;
//
//	}
//};
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}