#pragma once
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


//��ɫö��
enum RBTColor {
	RED,
	BLACK
};

template<class T>
class RBTNode {
public:
	//�ڵ���ɫ
	RBTColor color;
	//�ؼ��֣���ֵ��
	T key;
	//����
	RBTNode* left;
	//�Һ���
	RBTNode* right;
	//���ڵ�
	RBTNode* parent;
	RBTNode(T value, RBTColor c, RBTNode* p, RBTNode* l, RBTNode* r) :
		key(value), color(c), parent(), left(l), right(r) {}
};

//�����
template<class T>
class RBTree
{
private:
	//���ڵ�
	RBTNode<T>* mRoot;
public:
	RBTree();
	~RBTree();

	//ǰ�����
	void preOrder();
	//�������
	void inOrder();
	//�������
	void postOrder();

	//���ݹ飩���Һ������ֵΪkey�Ľڵ�
	RBTNode<T>* search(T key);
	RBTNode<T>* iterativeSearch(T key);

	//������С�ڵ㣺������С��ֵ
	T minimum();
	//�������ڵ㣺��������ֵ
	T maximum();

	//�ҽڵ㣨x���ĺ�̽ڵ㡣�����ҡ������������ֵ���ڸýڵ㡱�ġ���С�ڵ㡱��
	RBTNode<T>* successor(RBTNode<T>* x);
	//�ҽڵ㣨x����ǰ���ڵ㡣�����ҡ������������ֵС�ڸýڵ㡱�ġ����ڵ㡱��
	RBTNode<T>* predecessor(RBTNode<T>* x);

	//���ڵ㣨keyΪ�ڵ��ֵ�����뵽�������
	void insert(T key);
	//ɾ���ڵ㣨keyΪ�ڵ��ֵ��
	void remove(T key);
	//���ٺ����
	void destory();
	//��ӡ�����
	void print();
private:
	//ǰ����������
	void preOrder(RBTNode<T>* tree) const;
	//������������
	void inOrder(RBTNode<T>* tree) const;
	//������������
	void postOrder(RBTNode<T>* tree) const;

	//���ݹ�ʵ�֣����ҡ������x���м�ֵΪkey�Ľڵ�
	RBTNode<T>* search(RBTNode<T>* x, T key) const;
	//���ǵݹ�ʵ�֣����ҡ������x���м�ֵΪkey�Ľڵ�
	RBTNode<T>* iterativeSearch(RBTNode<T>* x, T key) const;

	//������С�ڵ㣺����treeΪ���ڵ�ĺ��������С�ڵ�
	RBTNode<T>* minimum(RBTNode<T>* tree);
	//�������ڵ㣺����treeΪ���ڵ�ĺ���������ڵ�
	RBTNode<T>* maximum(RBTNode<T>* tree);

	//����
	void leftRotate(RBTNode<T>*& root, RBTNode<T>* x);
	//����
	void rightRotate(RBTNode<T>*& root, RBTNode<T>* y);
	//���뺯��
	void insert(RBTNode<T>*& root, RBTNode<T>* node);
	//������������
	void insertFixup(RBTNode<T>*& root, RBTNode<T>* node);
	//ɾ������
	void remove(RBTNode<T>*& root, RBTNode<T>* node);
	//ɾ����������
	void removeFixUp(RBTNode<T>*& root, RBTNode<T>* node, RBTNode<T>* parent);
	//���ٺ����
	void destory(RBTNode<T>* tree);
	//��ӡ�����
	void print(RBTNode<T>* tree, T key, int direction);


//�궨��--------------------------------------------------------
#define rb_parent(r) ((r)->parent)
#define rb_color(r) ((r)->color)
#define rb_is_red(r)((r)->color == RED)
#define rb_is_black(r) ((r)->color == BLACK)
#define rb_set_black(r) do{(r)->color = BLACK;}while(0)
#define rb_set_red(r) do{(r)->color = RED;}while(0)
#define rb_set_parent(r,p) do{(r)->parent = (p);}while(0)
#define rb_set_color(r,c) do{(r)->color = (c);}while(0)
//�궨��--------------------------------------------------------

};


