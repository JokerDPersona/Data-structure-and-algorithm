//#include "MyStack.h"
//
//MyStack::MyStack()
//{
//
//}
//
//void MyStack::push(int x)
//{
//	q1.push(x);
//	head = x;
//}
//
//int MyStack::pop()
//{
//	while (q1.size() > 1) {
//		//返回队列1的头元素
//		head = q1.front();
//		//推入队列2中
//		q2.push(head);
//	    //队列1弹出s
//		q1.pop();
//	}
//	int result = q1.front();
//	q1.pop();
//	queue<int> temp = q1;
//	q1 = q2;
//	q2 = temp;
//	return result;
//}
//
//int MyStack::top()
//{
//	return head;
//}
//
//bool MyStack::empty()
//{
//	return q1.empty();
//}
