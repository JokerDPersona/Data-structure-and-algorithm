//#include "climbStairs.h"
//#include <iostream>
//
//template<unsigned N>struct Fib {
//	enum {
//		Val = Fib<N - 1>::Val + Fib<N - 2>::Val
//	};
//};
//
//template<>struct Fib<0> { enum { Val = 0 }; };
//template<>struct Fib<1> { enum { Val = 1 }; };
//template<>struct Fib<2> { enum { Val = 2 }; };
//
//#define FibT(n)Fib<n>::Val
//
//using namespace std;
//
//int main() {
//	climbStairs clb;
//	int num;
//	num = clb.Climb(20);
//	cout << "ѭ������:" << num << endl;
//	cout << "ģ��Ԫ����" << FibT(20) << endl;
//	unsigned count = clb.RecursiveFact(20);
//	cout << "�ݹ����:" << count << endl;
//	getchar();
//	return 0;
//}
//
////��̬�滮(쳲���������)[f(n)=f(n-1)+f(n-2)]
//int climbStairs::Climb(int n)
//{
//	int fool_1 = 1, fool_2 = 2, temp = 1;
//	for (int i = 3; i <= n; ++i) {
//		temp = fool_1 + fool_2;
//		fool_1 = fool_2;
//		fool_2 = temp;
//	}
//	return temp;
//}
//
//unsigned climbStairs::RecursiveFact(unsigned n)
//{
//	if (n <= 2)return n;
//	return RecursiveFact(n - 1) + RecursiveFact(n - 2);
//}
