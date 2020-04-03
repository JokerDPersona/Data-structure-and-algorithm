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
////	//�ڵ�����
////	T data;
////	//������������
////	BinTreeNode<T>* leftChild, * rightChild;
////	//�޲ι���
////	BinTreeNode() :leftChild(NULL), rightChild(NULL) {}
////	//Ĭ��ֵ�вι���
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
////	//���캯��
////	Tree() :root(NULL) {}
////	//ָ��������־�Ĺ��캯��
////	Tree(T value) :RefValue(value), root(NULL) {}
////	//��������
////	~Tree() { Destory(root); }
////
////	//�������Ĵ���---------------------------------------------------------
////
////	//ʹ�ù���������������ԡ�#���ַ��������
////	void CreateBinTree() { CreateBinTree(root); }
////
////	//ǰ������������������á�#����ʾ�սڵ�
////	void CreateBinTree_PreOrder() { CreateBinTree_PreOrder(root); }
////
////	//ǰ����������򴴽�������
////	void CreateBinTree_Pre_In(const char* pre, const char* in) {
////		int n = strlen(pre);
////		CreateBinTree_Pre_In(root, post, in, n);
////	}
////
////	//������������򴴽�������
////	void CreateBinTree_Post_In(const char* post, const char* in) {
////		int n = strlen(post);
////		CreateBinTree_Post_In(root, post, in, n);
////	}
////
////	//�������Ĵ���---------------------------------------------------------
////
////	//�������ı���---------------------------------------------------------
////
////	//ǰ��������ݹ飩
////	void PreOrder() { PreOrder(root); }
////
////	//����������ݹ飩
////	void InOrder() { InOrder(root); }
////
////	//����������ݹ飩
////	void PostOrder() { PostOrder(root); }
////
////	//ǰ��������ǵݹ飩
////	void PreOrder_NoRecurve() { PreOrder_NoRecurve(root); }
////
////	//����������ǵݹ飩
////	void InOrder_NoRecurve() { InOrder_NoRecurve(root); }
////
////	//����������ǵݹ飩
////	void PostOrder_NoRecurve() { PostOrder_NoRecurve(root); }
////
////
////	//�������ı���---------------------------------------------------------
////
////	//��������ȡ�ڵ�-------------------------------------------------------
////
////	//��ȡ�������ĸ��ڵ�
////	Tree<T>* getroot()const { return root; }
////
////	//��ȡcurrent�ڵ�ĸ��ڵ�
////	Tree<T>* Parent(Tree<T>* current) { return(root == NULL || root == current) ? NULL : Parent(root, current); }
////
////	//��ȡcurrent�ڵ����ڵ�
////	Tree<T>* LeftChild(Tree<T>* current) { return(current != NULL) ? current->LeftChild : NULL; }
////
////	//��ȡcurrent�ڵ���ҽڵ�
////	Tree<T>* RightChild(Tree<T>* current) { return(current != NULL) ? current->RightChild : NULL; }
////
////	//��������ȡ�ڵ�-------------------------------------------------------
////
////	//�������ĳ�Ա����-----------------------------------------------------
////
////	//���ٺ���
////	void Destory() { Destory(root); }
////
////	//����������
////	Tree(Tree<T>& s) { root = Copy(s.getroot()); }
////
////	//�ж��������Ƿ����
////	bool operator == (Tree<T>& s) { return (equal(this->getroot(), s.getroot())); }
////
////	//����������ڵ�ĸ���
////	int Size() { return Size(root); }
////
////	//����������ĸ߶�
////	int Height() { return Height(root); }
////
////	//�ж϶������Ƿ�Ϊ��
////	bool Empty() { return (root == NULL) ? true : false; }
////
////	//���������
////	void PrintTree() { PrintTree(root); }
////
////	void Copy(BinTreeNode<T>* root);
////	//�������ĳ�Ա����-----------------------------------------------------
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
////				//����ڵ�
////				subTree = new BinTreeNode<T>(time);
////				if (subTree == NULL) {
////					cout << "�ռ�������" << endl;
////					exit(1);
////				}
////				//�ݹ鴴��������
////				CreateBinTree_PreOrder(subTree->LeftChild);
////				//�ݹ鴴��������
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
////	//ǰ��������ݹ飩
////	void PreOrder(BinTreeNode<T>*& subTree) {
////		if (subTree != NULL) {
////			cout << subTree->data << " ";
////			PreOrder(subTree->leftChild);
////			PreOrder(subTree->rightChild);
////		}
////	}
////
////	//����������ݹ飩
////	void InOrder(BinTreeNode<T>*& subTree) {
////		if (subTree != NULL) {
////			InOrder(subTree->leftChild);
////			cout << subTree->data << " ";
////			InOrder(subTree->rightChild);
////		}
////	}
////
////	//����������ݹ飩
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
////	//���ڵ�
////	BinTreeNode<T>* root;
////	//��������ֹͣ����Ҫ���캯��
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
