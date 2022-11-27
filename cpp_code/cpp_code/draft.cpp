#include <iostream>
#include <vector>
#include <limits.h>
//using namespace std;
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>

//ºËÐÄË¼Ïë£º

//class Solution
//{
//public:
//	int testA(std::vector<int>& array)
//	{
//		for (int k = 0; array.size() - 1; ++k)
//		{
//			std::cout << array[k] << std::endl;
//		}
//	}
//};
//
//void test()
//{
//	std::vector<int>array = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (int k = 0; k <= array.size() - 1; k++)
//	{
//		std::cout << array[k] << std::endl;
//		k += 2;
//	}

	//Solution p;
	//p.testA(array);
//}

void test()
{
	int buf1[5] = { 1, 3, 5, 7, 9 };
	int* p1 = nullptr;
	p1 = &buf1[1];
	std::cout << p1 << std::endl;
	p1++;
	std::cout << p1 << std::endl;

}


int main()
{
	test();

	system("pause");

	return 0;
}