//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//
///*
//void backtracking(����) {
//	if (��ֹ����) {
//		��Ž��;
//		return;
//	}
//
//	for (ѡ�񣺱��㼯����Ԫ�أ����нڵ㺢�ӵ��������Ǽ��ϵĴ�С��) {
//		����ڵ�;
//		backtracking(·����ѡ���б�); // �ݹ�
//		���ݣ�����������
//	}
//}
//*/
//class Soultion
//{
//private:
//	std::vector<std::vector<int>> result;
//	std::vector<int> path;
//	
//	void backtracking(std::vector<int> candidates, int sum, int target, int startIndex, std::vector<int> used)
//	{
//		//��ֹ����
//		//if (sum > target) //�������ʡ�ԣ���Ϊ����ı��������м�֦
//		//{
//		//	return;
//		//}
//
//		if (sum == target)
//		{
//			result.push_back(path);
//			return;
//		}
//
//		
//
//		//����
//		for (int i = startIndex; i < candidates.size() && sum + candidates[i] <= target; i++)
//		{
//			/*
//		used[i - 1] == true��˵��ͬһ��֦ candidates[i - 1] ʹ�ù�
//		used[i - 1] == false��˵��ͬһ���� candidates[i - 1] ʹ�ù�
//
//		�����Ҫ���carl�Ĳ������ȽϺ�
//		*/
//			//��ͬһ����ظ�Ԫ������
//			if (i > 0 && candidates[i] == candidates[i - 1] && used[i - 1] == 0)
//			{
//				continue;
//			}
//			sum += candidates[i];
//			path.push_back(candidates[i]);
//			used[i] = 1;
//			backtracking(candidates, sum, target, i + 1, used);
//			used[i] = 0;
//			sum -= candidates[i];
//			path.pop_back();
//		}
//
//	}
//
//public:
//	std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target)
//	{
//		std::vector<int> used(candidates.size(), 0); // ������������¼��һ��Ԫ���Ƿ�ʹ��
//
//		std::sort(candidates.begin(), candidates.end());
//		backtracking(candidates, 0, target, 0, used);
//		return result;
//	}
//
//};
//
//
//int main()
//{
//	system("pause");
//
//	return 0;
//}