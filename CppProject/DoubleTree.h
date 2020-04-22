#pragma once
#include <iostream>


using namespace std;
#define MaxSize 200

typedef char DataType;
typedef struct Node {
	DataType data;
	struct Node* lchild;
	struct Node* rchild;
}*BiTree, BitNode;


//������
class DoubleTree
{
public:
	//����tree������n��n��0������㹹�ɵ����޼���T�����n = 0�����Ϊ�����������κ�һ�÷ǿ����о��������ص㣺
	//��1������ֻ��һ����Ϊ����root���Ľ�㡣
	//��2����n > 1ʱ������n - 1�������Ի���Ϊm�����޼���T1��T2������Tm������m�����޼��ϻ����ཻ������Ti��1��i��m������һ��������Ϊ����������subtree����
	void CreateBitTraverse(BiTree* T);
	//ǰ�����
	void PreOrderTraverse(BiTree T);
	//�������
	void InOrderTraverse(BiTree T);
	//�������
	void PostOrderTraverse(BiTree T);
	void InitBitTree(BiTree* T);
	void DestroyBitTree(BiTree* T);
private:

};



