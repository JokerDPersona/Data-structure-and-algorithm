//#include "GuessNumber.h"
//
//#include <iostream>
//#include <stdlib.h>
//#include <cmath>
//#include <ctime>
//#include <random>
//
//using namespace std;
//
//int GuessNumber::guessNumber(int n)
//{
//	//接收输入数
//	int begin = 1, end = n;
//	//二分值
//	int mid = begin + (end - begin) / 2;
//
//	while (begin <= end) {
//		if (guess(mid) == 0) {
//			return mid;
//		}
//		else
//		{
//			if (guess(mid) == 1) {
//				begin = mid + 1;
//			}
//			else
//			{
//				end = mid - 1;
//			}
//		}
//	}
//	return -1;
//}
//
//int GuessNumber::guess(int num)
//{
//
//	//srand((unsigned int)(time(NULL)));
//	default_random_engine random(time(NULL));
//	//此处转换有问题= =
//	//大于猜的数返回1
//	if (random.min < num)
//		return 1;
//	//小于猜的数返回-1
//	if (random.min > num)
//		return -1;
//	//猜对了给个0
//	if (random.min == num)
//		return 0;
//}
//
//int main() {
//	GuessNumber gn;
//	int Number;
//	cin >> Number;
//	if (gn.guessNumber(Number) == 0) {
//		cout << "你猜对了哦" << endl;
//	}
//	else if (gn.guessNumber(Number) == 1) {
//		cout << "你猜大了哦" << endl;
//	}
//	else if (gn.guessNumber(Number) == -1) {
//		cout << "你猜小了哦" << endl;
//	}
//
//	getchar();
//	return 0;
//}
