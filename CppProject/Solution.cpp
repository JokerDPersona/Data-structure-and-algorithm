//#include "Solution.h"
//
//bool Solution::hasCycle(ListNode* head)
//{
//	//��ָ��
//	ListNode* fastter{ head };
//	//��ָ��
//	ListNode* slower{ head };
//
//	if (head == NULL) return false;
//	while (fastter != NULL && fastter->next != NULL) {
//		//��ָ��ÿ������
//		fastter = fastter->next->next;
//		//��ָ��ÿ��һ��
//		slower = slower->next;
//		//���������Σ�ֱ���޷�����
//		if (fastter == slower)return true;
//	}
//	//�յ㣬��Ȧ���յ�
//	return false;
//}
