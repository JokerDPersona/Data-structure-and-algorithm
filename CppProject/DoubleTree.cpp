#include "DoubleTree.h"

void DoubleTree::CreateBitTraverse(BiTree* T)
{
	DataType ch;
	scanf("%c", &ch);
	if (ch == '#') {
		*T = NULL;
	}
	else {
		*T = (BiTree)malloc(sizeof(BitNode));
		if (!(*T)) {
			exit(-1);
		}
		(*T)->data = ch;
		CreateBitTraverse(&((*T)->lchild));
		CreateBitTraverse(&((*T)->rchild));
	}
}

void DoubleTree::PreOrderTraverse(BiTree T)
{
	if (T) {
		cout << T->data << "Root" << endl;
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}

void DoubleTree::InOrderTraverse(BiTree T)
{
	if (T) {
		InOrderTraverse(T->lchild);
		cout << T->data << "Root" << endl;
		InOrderTraverse(T->rchild);
	}
}

void DoubleTree::PostOrderTraverse(BiTree T)
{
	if (T) {
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		cout << T->data << "Root" << endl;
	}
}

void DoubleTree::InitBitTree(BiTree* T)
{
	*T = NULL;
}

void DoubleTree::DestroyBitTree(BiTree* T)
{
	if (*T) {
		if ((*T)->lchild) {
			DestroyBitTree(&((*T)->lchild));
		}
		if ((*T)->rchild) {
			DestroyBitTree(&((*T)->rchild));
		}
		free(*T);
		*T = NULL;
	}
}

int main() {
	DoubleTree tree;
	BiTree T;
	tree.InitBitTree(&T);
	cout << "��������Ķ������������д�������������#����ʾ�գ�:" << endl;
	tree.CreateBitTraverse(&T);
	cout << "����������������:" << endl;
	tree.PreOrderTraverse(T);
	cout << "����������������:" << endl;
	tree.InOrderTraverse(T);
	cout << "�������ĺ�������:" << endl;
	tree.PostOrderTraverse(T);
	cout << endl;
	tree.DestroyBitTree(&T);
	getchar();
	return 0;
}
