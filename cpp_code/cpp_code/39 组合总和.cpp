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
//	//�ݹ麯��
//	void backtracking(std::vector<int> candidates, int target, int startIndex, int sum)
//	{
//		////��֦����
//		//if (sum > targetSum)
//		//{
//		//	return; //���Ǽ���һ���� ���޶�
//		//}
//
//		//��ֹ����
//		if (sum == target)
//		{
//			result.push_back(path);
//			return;
//		}
//
//		//�������
//		for (int i = startIndex; i < candidates.size() && sum+candidates[i] < target; i++)
//		{
//			sum += candidates[i];
//			path.push_back(candidates[i]);
//			backtracking(candidates, target, i, sum);
//			sum -= candidates[i];
//			path.pop_back(); // ����
//		}
//	}
//
//public:
//	std::vector<std::vector<int>> combinationSum(vector<int>& candidates, int target)
//	{
//		//��������Ϊ���ڼ�֦ʱ����ȷ
//		std::sort(candidates.begin(), candidates.end());
//		backtracking(candidates, target, 0, 0);
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