#include "CircularQueue.h"
#include <queue>

CircularQueue::CircularQueue(int k)
{
	data.resize(k);
	head = -1;
	tail = -1;
	size = k;
}

bool CircularQueue::enQueue(int value)
{
	if (isFull()) return false;
	if (isEmpty()) head = 0;
	tail = (tail + 1) % size;
	data[tail] = value;
	return true;
}

bool CircularQueue::deQueue()
{
	if (isEmpty()) return false;
	if (head == tail) {
		head = -1;
		tail = -1;
		return true;
	}
	head = (head + 1) % size;
	return true;
}

int CircularQueue::Fort()
{
	if (isEmpty()) return -1;
	return data[head];
}

int CircularQueue::Rear()
{
	if (isEmpty()) return -1;
	return data[tail];
}

bool CircularQueue::isEmpty()
{
	return head == -1;
}

bool CircularQueue::isFull()
{
	return ((tail + 1) % size) == head;
}

int main() {
	queue<int> q;
	q.push(5);
	q.push(13);
	q.push(8);
	q.push(6);
	if (q.empty()) {
		cout << "Queue is empty!" << endl;
		return 0;
	}
	q.pop();
	cout << "The first element is:" << q.front() << endl;
	cout << "The last element is:" << q.back() << endl;
	cout << "The size is:" << q.size() << endl;
	getchar();
	return 0;
}
