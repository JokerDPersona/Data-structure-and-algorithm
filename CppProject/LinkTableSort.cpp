//#include "LinkTableSort.h"
//#include<iostream>
//#include<vector>
//#include<iostream>
//
//using namespace std;
//
//void mergearry(vector<int>& a, int first, int mid, int last) {
//	int i = first, j = mid + 1;
//	int m = mid, n = last;
//	int k = 0;
//
//	vector<int> temp;
//	//拆分
//	while (i <= m && j <= n) {
//		if (a[i] <= a[j]) {
//			temp.push_back(a[i++]);
//		}
//		else {
//			temp.push_back(a[j++]);
//		}
//		k++;
//	}
//	//左插入
//	while (i <= m) {
//		temp.push_back(a[i++]);
//		k++;
//	}
//	//右插入
//	while (j <= n) {
//		temp.push_back(a[j++]);
//		k++;
//	}
//	//合并操作
//	for (i = 0; i < k; i++) {
//		a[first + i] = temp[i];
//	}
//
//}
//
////开始排序
//void mergearry(vector<int>& a, int first, int last) {
//	if (first < last) {
//		int mid = (first + last) / 2;
//		//左排序
//		mergearry(a, first, mid);
//		//右排序
//		mergearry(a, mid + 1, last);
//		//合并
//		mergearry(a, first, mid, last);
//	}
//}
//
//int main() {
//
//	vector<int> a;
//	int list[] = { 13,8,6,5,4,3,5,78,9,2,56,6,35,446,685,24,78,5,2,6,8,23,496,8,745,54 };
//
//	for (int i = 0; i < 26; i++) {
//		a.push_back(list[i]);
//	}
//	
//	mergearry(a, 0, a.size() - 1);
//	for (auto j : a) {
//		cout << j << ' ';
//	}
//
//	getchar();
//	return 0;
//}
//
//
