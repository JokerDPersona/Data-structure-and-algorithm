#include "removeDuplicatesByList.h"
#include <iostream>
#include <algorithm>


int removeDuplicatesByList::removeDuplicates(vector<int>& nums)
{

	if (nums.size() == 0) {
		return 0;
	}

	int index = 1;

	for (int i = 0; i < nums.size(); ++i) {
		if (nums[index] != nums[i]) {
			index++;
			nums[index] = nums[i];
		}
	}

	return index;
}

void printList(vector<int> nums) {
	for (int i = 0; i < nums.size(); ++i) {
		cout << "里面的元素为:" << nums[i] << endl;
	}
}

int main() {
	removeDuplicatesByList bylist;
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(2);
	printList(arr);
	bylist.removeDuplicates(arr);
	cout << endl;
	printList(arr);

	getchar();
	return 0;
}
