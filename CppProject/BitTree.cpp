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
////由中序序列和后序序列构造二叉树
//void CreateBiTree(BiTree* T, char* in, char* post, int len)
//{
//	int k = 0;
//	char* temp;
//	if (len < 0) {
//		*T = NULL;
//		return;
//	}
//
//	//在中序序列in中找到根节点所在位置
//	for (temp = in; temp < in + len; ++temp) {
//		if (*(post + len - 1) == *temp) {
//			//左子树长度
//			k = temp - in;
//			(*T) = (BitNode*)malloc(sizeof(BitNode));
//			(*T)->data = *temp;
//			break;
//		}
//		//建立左子树
//		CreateBiTree(&((*T)->lichild), in, post, k);
//		//建立右子树
//		CreateBiTree(&((*T)->richild), in + k + 1, post + k, len - k - 1);
//	}
//}
//
////层次输出二叉树
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
//		cout << "输出队头元素:" << Queue[front]->data << endl;
//		//如果队头元素左孩子节点不为空，则左孩子入队
//		if (Queue[front]->lichild != NULL) {
//			rear++;
//			Queue[rear] = Queue[front]->lichild;
//		}
//		//如果队头元素右孩子不为空，则右孩子入队
//		if (Queue[front]->richild != NULL) {
//			rear++;
//			Queue[rear] = Queue[front]->richild;
//		}
//	}
//}
//
////先序输出二叉树节点
//void PreTraverse(BiTree T)
//{
//	if (T != NULL) {
//		cout << "输出根节点:" << T->data << endl;
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
//	cout << "输出根节点:" << T->data;
//	TreePrint(T->lichild, level + 1);
//}
//
//
//int main() {
//	BiTree T;
//	int len;
//	char in[MAXSIZE], post[MAXSIZE];
//	cout << "由中序序列和后序序列构造二叉树:" << endl;
//	cout << "请输入中序序列的字符串序列:" << endl;
//	cin >> post;
//	len = sizeof(post) / sizeof(int);
//	CreateBiTree(&T, in, post, len);
//	TreePrint(T, 1);
//	cout << endl << "建立的二叉树先序遍历结果为:" << endl;
//	PreTraverse(T);
//	cout << endl << "建立的二叉树层次遍历结果为:" << endl;
//	PrintLevel(T);
//	cout << endl;
//	getchar();
//	return 0;
//}
//
