//#pragma once
//#include <iostream>
//#include <stack>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <list>
//#include <time.h>
//
//using namespace std;
//
////template<typename T>
////struct BinTreeNode
////{
////	//节点数据
////	T data;
////	//左子树右子树
////	BinTreeNode<T>* leftChild, * rightChild;
////	//无参构造
////	BinTreeNode() :leftChild(NULL), rightChild(NULL) {}
////	//默认值有参构造
////	BinTreeNode(T x, BinTreeNode<T>* l = NULL, BinTreeNode<T>* r = NULL) :data(x), leftChild(l), rightChild(t) {}
////
////};
////
////
//
//typedef struct BinTreeNode
//{
//public:
//	int data;
//	BinTreeNode* father;
//	BinTreeNode* leftchild;
//	BinTreeNode* rightchild;
//private:
//
//}BinTreeNode;
//
//
////template<typename T>
//class Tree
//{
//
////public:
////	//构造函数
////	Tree() :root(NULL) {}
////	//指定结束标志的构造函数
////	Tree(T value) :RefValue(value), root(NULL) {}
////	//析构函数
////	~Tree() { Destory(root); }
////
////	//二叉树的创建---------------------------------------------------------
////
////	//使用广义表创建二叉树，以“#”字符代表结束
////	void CreateBinTree() { CreateBinTree(root); }
////
////	//前序遍历创建二叉树，用“#”表示空节点
////	void CreateBinTree_PreOrder() { CreateBinTree_PreOrder(root); }
////
////	//前序遍历和中序创建二叉树
////	void CreateBinTree_Pre_In(const char* pre, const char* in) {
////		int n = strlen(pre);
////		CreateBinTree_Pre_In(root, post, in, n);
////	}
////
////	//后序遍历和中序创建二叉树
////	void CreateBinTree_Post_In(const char* post, const char* in) {
////		int n = strlen(post);
////		CreateBinTree_Post_In(root, post, in, n);
////	}
////
////	//二叉树的创建---------------------------------------------------------
////
////	//二叉树的遍历---------------------------------------------------------
////
////	//前序遍历（递归）
////	void PreOrder() { PreOrder(root); }
////
////	//中序遍历（递归）
////	void InOrder() { InOrder(root); }
////
////	//后序遍历（递归）
////	void PostOrder() { PostOrder(root); }
////
////	//前序遍历（非递归）
////	void PreOrder_NoRecurve() { PreOrder_NoRecurve(root); }
////
////	//中序遍历（非递归）
////	void InOrder_NoRecurve() { InOrder_NoRecurve(root); }
////
////	//后序遍历（非递归）
////	void PostOrder_NoRecurve() { PostOrder_NoRecurve(root); }
////
////
////	//二叉树的遍历---------------------------------------------------------
////
////	//二叉树获取节点-------------------------------------------------------
////
////	//获取二叉树的根节点
////	Tree<T>* getroot()const { return root; }
////
////	//获取current节点的父节点
////	Tree<T>* Parent(Tree<T>* current) { return(root == NULL || root == current) ? NULL : Parent(root, current); }
////
////	//获取current节点的左节点
////	Tree<T>* LeftChild(Tree<T>* current) { return(current != NULL) ? current->LeftChild : NULL; }
////
////	//获取current节点的右节点
////	Tree<T>* RightChild(Tree<T>* current) { return(current != NULL) ? current->RightChild : NULL; }
////
////	//二叉树获取节点-------------------------------------------------------
////
////	//二叉树的成员函数-----------------------------------------------------
////
////	//销毁函数
////	void Destory() { Destory(root); }
////
////	//拷贝二叉树
////	Tree(Tree<T>& s) { root = Copy(s.getroot()); }
////
////	//判断两棵树是否相等
////	bool operator == (Tree<T>& s) { return (equal(this->getroot(), s.getroot())); }
////
////	//计算二叉树节点的个数
////	int Size() { return Size(root); }
////
////	//计算二叉树的高度
////	int Height() { return Height(root); }
////
////	//判断二叉树是否为空
////	bool Empty() { return (root == NULL) ? true : false; }
////
////	//输出二叉树
////	void PrintTree() { PrintTree(root); }
////
////	void Copy(BinTreeNode<T>* root);
////	//二叉树的成员函数-----------------------------------------------------
////
////protected:
////
////	void CreateBinTree(BinTreeNode<T>*& BT) {
////		stack<BinTreeNode<T>*> s;
////		BT = NULL;
////		BinTreeNode<T>* p, * t;
////		int k;
////		T ch;
////		cin >> ch;
////
////		while (ch != RefValue) {
////			switch (ch)
////			{
////			case '(':
////				s.push(p);
////				k = 1;
////				break;
////			case')':
////				s.pop();
////				break;
////			case',':
////				k = 2;
////				break;
////			default:
////				p = new BinTreeNode<T>(ch);
////				if (BT == NULL) {
////					BT = p;
////				}
////				else if (k == 1) {
////					t = s.top();
////					t->LeftChild = p;
////				}
////				else {
////					t = s.top();
////					t->RightChild = p;
////				}
////				break;
////			}
////			cin >> ch;
////		}
////	}
////
////	void CreateBinTree_PreOrder(BinTreeNode<T>*& subTree) {
////		T item;
////		if (cin >> item) {
////			if (item != RefValue) {
////				//构造节点
////				subTree = new BinTreeNode<T>(time);
////				if (subTree == NULL) {
////					cout << "空间分配错误！" << endl;
////					exit(1);
////				}
////				//递归创建左子树
////				CreateBinTree_PreOrder(subTree->LeftChild);
////				//递归创建右子树
////				CreateBinTree_PreOrder(subTree->RightChild);
////			}
////			else {
////				subTree = NULL;
////			}
////		}
////	}
////
////	void CreateBinTree_Pre_In(BinTreeNode<T>*& cur, const char* pre, const char* in, int n) {
////		if (n <= 0) {
////			cur = NULL;
////			return;
////		}
////		int k = 0;
////		while (pre[0] != in[k]) {
////			k++;
////		}
////		cur = new BinTreeNode<T>(in[k]);
////		CreateBinTree_Pre_In(cur->LeftChild, pre + 1, in, k);
////		CreateBinTree_Pre_In(cur->RightChild, pre + k + 1, in + k + 1, n - l - 1);
////	}
////
////	void CreateBinTree_Post_In(BinTreeNode<T>*& cur, const char* post, const char* in, int n) {
////		if (n == 0) {
////			cur = NULL;
////			return;
////		}
////
////		char r = *(post + n - 1);
////		cur = new BinTreeNode<T>(r);
////		int k = 0;
////		const char* p = in;
////		while (*p != r) {
////			k++;
////			p++;
////		}
////		CreateBinTree_Post_In(cur->LeftChild, post, in, k);
////		CreateBinTree_Post_In(cur->RightChild, post + k, p + 1, n - k - 1);
////	}
////
////	//前序遍历（递归）
////	void PreOrder(BinTreeNode<T>*& subTree) {
////		if (subTree != NULL) {
////			cout << subTree->data << " ";
////			PreOrder(subTree->leftChild);
////			PreOrder(subTree->rightChild);
////		}
////	}
////
////	//中序遍历（递归）
////	void InOrder(BinTreeNode<T>*& subTree) {
////		if (subTree != NULL) {
////			InOrder(subTree->leftChild);
////			cout << subTree->data << " ";
////			InOrder(subTree->rightChild);
////		}
////	}
////
////	//后序遍历（递归）
////	void PostOrder(BinTreeNode<T>*& subTree) {
////		if (subTree != NULL) {
////			PostOrder(subTree->leftChild);
////			PostOrder(subTree->rightChild);
////			cout << subTree->data << " ";
////		}
////	}
////
////
////
////private:
////	//根节点
////	BinTreeNode<T>* root;
////	//数据输入停止，需要构造函数
////	T RefValue;
//
//
//public:
//	Tree();
//	~Tree();
//
//	void insert(int data);
//	BinTreeNode* findNode(int data);
//	void preOrder(BinTreeNode* p);
//	void inOrder(BinTreeNode* p);
//	void lastOrder(BinTreeNode* p);
//	void clear(BinTreeNode* p);
//	BinTreeNode* getRoot();
//	void levelOrder();
//	void deleteByData(int data);
//private:
//	BinTreeNode* root;
//};
//
//
