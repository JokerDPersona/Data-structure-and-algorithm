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
//			//����������ֵС���м���������Ӧ�±����ֵ���м�ָ������λ��
//			if (item < list[midpoint]) {
//				last = midpoint - 1;
//			}
//			//����������ֵ�����м���Ұ�����Ӧ�±����ֵ���м�ָ������λ��
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
//				//����������
//				return RecursiveBinarySearch(list, begin, midpoint, item);
//			}
//			else {
//				//���Ұ������
//				return RecursiveBinarySearch(list, midpoint + 1, end, item);
//			}
//		}
//	}
//}
//
//int main() {
//	//�����������򣬷�����������������±����ֵ����Ӧ������Ҳ���
//	vector<int> data({
//		1,2,3,4,5,6,7,8,9,10
//	});
//	BinarySearch bs;
//	auto item = bs.RecursiveBinarySearch(data, 0, data.size(), 6);
//	cout << "��ӡ�����ҵ�Ԫ��" << item << endl;
//	getchar();
//	return 0;
//}
//
//
