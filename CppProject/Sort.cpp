//#include "Sort.h"
//#include<iostream>
//using namespace std;
//
//int const MAXSIZE = 20;
//
//typedef struct SqList
//{
//	int R[MAXSIZE] = { 16,7,13,10,9,15,3,2,5,8,12,1,11,4,6,14 };
//	int Length = MAXSIZE;
//}SqList;
//
//void MergeSort(SqList *list);
//void MSort(int SR[], int TR1[], int s, int t);
//void Merge(int TR1[], int TR2[], int s, int m, int t);
//
//
//Sort::Sort()
//{
//	
//}
//
//
//Sort::~Sort()
//{
//
//}
//
//void MergeSort(SqList *list) {
//	MSort(list->R, list->R, 1, list->Length);
//
//}
//
//void MSort(int SR[], int TR1[], int s, int t) {
//	int m;
//	int TR2[MAXSIZE + 1];
//	if (s == t) {
//		TR1[s] = SR[s];
//	}
//	else
//	{
//		m = (s + t) / 2;
//		MSort(SR, TR2, s, m);
//		MSort(SR, TR2, m + 1, t);
//		Merge(TR2, TR1, s, m, t);
//	}
//}
//
//void Merge(int SR[], int TR[], int i, int m, int n) {
//	int j, k, l;
//	for (j = m + 1, k = i; i <= m && j <= n; k++) {
//		if (SR[i] < SR[j]) {
//			TR[k] = SR[i++];
//		}
//		else {
//			TR[k] = SR[j++];
//		}
//	}
//	if (i <= m) {
//		for (l = 0; l <= m - i; l++) {
//			TR[k + 1] = SR[i + l];
//		}
//	}
//	if (j <= n) {
//		for (l = 0; l <= n - j; l++) {
//			TR[k + l] = SR[j + l];
//		}
//	}
//}
//
//
//int main() {
//	SqList* list = new SqList();
//	for (int i = 0; i < sizeof(list); i++) {
//		cout << list->R[i] << "  ";
//		cout << endl;
//	}
//	cout << "排序前的数组" << endl;
//
//	MergeSort(list);
//
//	for (int i = 0; i < sizeof(list); i++) {
//		cout << list->R[i] << "  ";
//		cout << endl;
//	}
//	cout << "排序后的数组" << endl;
//	getchar();
//	return 0;
//}
//
//
