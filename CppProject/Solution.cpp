//#include "Solution.h"
//
//bool Solution::hasCycle(ListNode* head)
//{
//	//快指针
//	ListNode* fastter{ head };
//	//慢指针
//	ListNode* slower{ head };
//
//	if (head == NULL) return false;
//	while (fastter != NULL && fastter->next != NULL) {
//		//快指针每次两步
//		fastter = fastter->next->next;
//		//慢指针每次一步
//		slower = slower->next;
//		//相遇，环形，直形无法相遇
//		if (fastter == slower)return true;
//	}
//	//终点，绕圈无终点
//	return false;
//}
