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
//	//����������
//	int begin = 1, end = n;
//	//����ֵ
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
//	//�˴�ת��������= =
//	//���ڲµ�������1
//	if (random.min < num)
//		return 1;
//	//С�ڲµ�������-1
//	if (random.min > num)
//		return -1;
//	//�¶��˸���0
//	if (random.min == num)
//		return 0;
//}
//
//int main() {
//	GuessNumber gn;
//	int Number;
//	cin >> Number;
//	if (gn.guessNumber(Number) == 0) {
//		cout << "��¶���Ŷ" << endl;
//	}
//	else if (gn.guessNumber(Number) == 1) {
//		cout << "��´���Ŷ" << endl;
//	}
//	else if (gn.guessNumber(Number) == -1) {
//		cout << "���С��Ŷ" << endl;
//	}
//
//	getchar();
//	return 0;
//}
