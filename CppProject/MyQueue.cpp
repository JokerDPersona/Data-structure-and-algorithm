//#include "MyQueue.h"
//#include <iostream>
//
//using namespace std;
//
//bool MyQueue::enQueue(int x)
//{
//	data.push_back(x);
//	return true;
//}
//
//bool MyQueue::deQueue()
//{
//	if (isEmpty()) {
//		return false;
//	}
//	p_start++;
//	return true;
//}
//
//int MyQueue::Front()
//{
//	return data[p_start];
//}
//
//bool MyQueue::isEmpty()
//{
//	return p_start >= data.size();
//}
//
//int main() {
//	MyQueue q;
//	q.enQueue(5);
//	q.enQueue(3);
//	if (!q.isEmpty()) {
//		cout << q.Front() << endl;
//	}
//	q.deQueue();
//	if (!q.isEmpty()) {
//		cout << q.Front() << endl;
//	}
//	q.deQueue();
//	if (!q.isEmpty()) {
//		cout << q.Front() << endl;
//	}
//	getchar();
//	return 0;
//}