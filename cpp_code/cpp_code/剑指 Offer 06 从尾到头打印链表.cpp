//#include <iostream>
//#include <vector>
//#include <limits.h>
////using namespace std;
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//#include <stack>
//
////����˼�룺
////��������������ݷ���һ�������У�Ȼ����������ݷ�һ�¾Ϳ��ԣ�����������ඨ��һ���������洢����ʹ�ÿռ临�Ӷ����ӣ�
////���Բ�ʵ�á��������ݽ�ȥ�ͳ���˳���ſ϶�����ջ�����Ծ��붨��һ��ջ�Ȱ�����Ѻ��ջ�У�Ȼ���ڽ�ջ�����ݴ洢�������м��ɡ�
//
//
////������
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	
//	//�ڵ�Ĺ��캯��
//	ListNode(int x) : val(x), next(NULL) {};
//};
//
//class Solution
//{
//public:
//	std::vector<int> reversePrint(ListNode* head)
//	{
//		std::vector<int> result;
//		std::stack<int> temp;
//		ListNode* cur = head;
//
//		//������ջ
//		while (cur != nullptr)
//		{
//			temp.push(cur->val);
//			cur = cur->next;
//		}
//
//		while (!temp.empty())
//		{
//			result.push_back(temp.top());
//			temp.pop();
//		}
//
//		return result;
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