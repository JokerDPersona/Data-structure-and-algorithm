//#include "BinarySearch.h"
//
//
//bool BinarySearch::IterativeBinarySearch(const vector<int>& list, const size_t begin, const size_t end, const int item)
//{
//	int first = 0;
//	int last = list.size() - 1;
//	bool found = false;
//	while (first <= last && !found) {
//		int midpoint = begin + (end - begin) / 2;
//		if (list[midpoint] == item) {
//			found = true;
//		}
//		else {
//			//如果传入的数值小于中间点左半区对应下标的数值，中间指针向左位移
//			if (item < list[midpoint]) {
//				last = midpoint - 1;
//			}
//			//如果传入的数值大于中间点右半区对应下标的数值，中间指针向右位移
//			else
//			{
//				first = midpoint + 1;
//			}
//		}
//	}
//	return found;
//}
//
//int BinarySearch::RecursiveBinarySearch(const vector<int>& list, const size_t begin, const size_t end, const int item)
//{
//	if (list.size() == 0) {
//		return 0;
//	}
//	else {
//		int midpoint = begin + (end - begin) / 2;//list.size() / 2;
//		if (list[midpoint] == item) {
//			return item;
//		}
//		else {
//			if (item < list[midpoint]) {
//				//传左半边数组
//				return RecursiveBinarySearch(list, begin, midpoint, item);
//			}
//			else {
//				//传右半边数组
//				return RecursiveBinarySearch(list, midpoint + 1, end, item);
//			}
//		}
//	}
//}
//
//int main() {
//	//保持数组有序，否则特殊情况（比如下标和数值不对应）会查找不到
//	vector<int> data({
//		1,2,3,4,5,6,7,8,9,10
//	});
//	BinarySearch bs;
//	auto item = bs.RecursiveBinarySearch(data, 0, data.size(), 6);
//	cout << "打印出查找的元素" << item << endl;
//	getchar();
//	return 0;
//}
//
//
