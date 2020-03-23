//#include "MyQueue.h"
//
//MyQueue::MyQueue()
//{
//
//}
//
//void MyQueue::push(int x)
//{
//	stack <int> s2;
//	while (s1.size()) {
//		s2.push(s1.top());
//		s1.pop();
//	}
//	s1.push(x);
//	while (s2.size()) {
//		s1.push(s2.top());
//		s2.pop();
//	}
//}
//
//int MyQueue::pop()
//{
//	int a = s1.top();
//	s1.pop();
//	return a;
//}
//
//int MyQueue::peek()
//{
//	return s1.top();
//}
//
//bool MyQueue::empty()
//{
//	return s1.empty();
//}
//
//int main() {
//	MyQueue mq;
//	mq.push(2);
//	mq.push(8);
//	mq.push(4);
//	
//	cout << "peek:" << mq.peek() << endl;
//	cout << "pop:" << mq.pop() << endl;
//	getchar();
//	return 0;
//}
//
