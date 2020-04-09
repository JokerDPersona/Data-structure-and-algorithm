//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//#include <iostream>
//using namespace std;
//constexpr auto MAXSIZE = 100;
//
//typedef struct Node {
//	char data;
//	struct Node* lichild, * richild;
//}BitNode, * BiTree;
//
//void CreateBiTree(BiTree* T, char* in, char* post, int len);
//void PrintLevel(BiTree T);
//void PreTraverse(BiTree T);
//void TreePrint(BiTree T, int level);
//
////���������кͺ������й��������
//void CreateBiTree(BiTree* T, char* in, char* post, int len)
//{
//	int k = 0;
//	char* temp;
//	if (len < 0) {
//		*T = NULL;
//		return;
//	}
//
//	//����������in���ҵ����ڵ�����λ��
//	for (temp = in; temp < in + len; ++temp) {
//		if (*(post + len - 1) == *temp) {
//			//����������
//			k = temp - in;
//			(*T) = (BitNode*)malloc(sizeof(BitNode));
//			(*T)->data = *temp;
//			break;
//		}
//		//����������
//		CreateBiTree(&((*T)->lichild), in, post, k);
//		//����������
//		CreateBiTree(&((*T)->richild), in + k + 1, post + k, len - k - 1);
//	}
//}
//
////������������
//void PrintLevel(BiTree T) {
//	BiTree Queue[MAXSIZE];
//	int front, rear;
//	if (T == NULL) {
//		return;
//	}
//	front = 0;
//	front -= 1;
//	rear = 0;
//	Queue[rear] = T;
//	while (front != rear) {
//		front++;
//		cout << "�����ͷԪ��:" << Queue[front]->data << endl;
//		//�����ͷԪ�����ӽڵ㲻Ϊ�գ����������
//		if (Queue[front]->lichild != NULL) {
//			rear++;
//			Queue[rear] = Queue[front]->lichild;
//		}
//		//�����ͷԪ���Һ��Ӳ�Ϊ�գ����Һ������
//		if (Queue[front]->richild != NULL) {
//			rear++;
//			Queue[rear] = Queue[front]->richild;
//		}
//	}
//}
//
////��������������ڵ�
//void PreTraverse(BiTree T)
//{
//	if (T != NULL) {
//		cout << "������ڵ�:" << T->data << endl;
//		PreTraverse(T->lichild);
//		PreTraverse(T->richild);
//	}
//}
//
//void TreePrint(BiTree T, int level) {
//	int i;
//	if (T == NULL) {
//		return;
//	}
//	TreePrint(T->richild, level + 1);
//	for (i = 0; i < level; ++i) {
//		cout << "  ";
//	}
//	cout << "������ڵ�:" << T->data;
//	TreePrint(T->lichild, level + 1);
//}
//
//
//int main() {
//	BiTree T;
//	int len;
//	char in[MAXSIZE], post[MAXSIZE];
//	cout << "���������кͺ������й��������:" << endl;
//	cout << "�������������е��ַ�������:" << endl;
//	cin >> post;
//	len = sizeof(post) / sizeof(int);
//	CreateBiTree(&T, in, post, len);
//	TreePrint(T, 1);
//	cout << endl << "�����Ķ���������������Ϊ:" << endl;
//	PreTraverse(T);
//	cout << endl << "�����Ķ�������α������Ϊ:" << endl;
//	PrintLevel(T);
//	cout << endl;
//	getchar();
//	return 0;
//}
//
