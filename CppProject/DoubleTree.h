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


//二叉树
class DoubleTree
{
public:
	//树（tree）是由n（n≥0）个结点构成的有限集合T。如果n = 0，则称为空树。否则，任何一棵非空树中具有以下特点：
	//（1）有且只有一个称为根（root）的结点。
	//（2）当n > 1时，其余n - 1个结点可以划分为m个有限集合T1，T2，…，Tm，且这m个有限集合互不相交，其中Ti（1≤i≤m）又是一棵树，称为根的子树（subtree）。
	void CreateBitTraverse(BiTree* T);
	//前序遍历
	void PreOrderTraverse(BiTree T);
	//中序遍历
	void InOrderTraverse(BiTree T);
	//后序遍历
	void PostOrderTraverse(BiTree T);
	void InitBitTree(BiTree* T);
	void DestroyBitTree(BiTree* T);
private:

};



