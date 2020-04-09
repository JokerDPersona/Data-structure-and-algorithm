#pragma once
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


//颜色枚举
enum RBTColor {
	RED,
	BLACK
};

template<class T>
class RBTNode {
public:
	//节点颜色
	RBTColor color;
	//关键字（键值）
	T key;
	//左孩子
	RBTNode* left;
	//右孩子
	RBTNode* right;
	//父节点
	RBTNode* parent;
	RBTNode(T value, RBTColor c, RBTNode* p, RBTNode* l, RBTNode* r) :
		key(value), color(c), parent(), left(l), right(r) {}
};

//红黑树
template<class T>
class RBTree
{
private:
	//根节点
	RBTNode<T>* mRoot;
public:
	RBTree();
	~RBTree();

	//前序遍历
	void preOrder();
	//中序遍历
	void inOrder();
	//后序遍历
	void postOrder();

	//（递归）查找红黑树键值为key的节点
	RBTNode<T>* search(T key);
	RBTNode<T>* iterativeSearch(T key);

	//查找最小节点：返回最小键值
	T minimum();
	//查找最大节点：返回最大键值
	T maximum();

	//找节点（x）的后继节点。即查找“红黑树中数据值大于该节点”的“最小节点”。
	RBTNode<T>* successor(RBTNode<T>* x);
	//找节点（x）的前驱节点。即查找“红黑树中数据值小于该节点”的“最大节点”。
	RBTNode<T>* predecessor(RBTNode<T>* x);

	//将节点（key为节点键值）插入到红黑树中
	void insert(T key);
	//删除节点（key为节点键值）
	void remove(T key);
	//销毁红黑树
	void destory();
	//打印红黑树
	void print();
private:
	//前序遍历红黑树
	void preOrder(RBTNode<T>* tree) const;
	//中序遍历红黑树
	void inOrder(RBTNode<T>* tree) const;
	//后序遍历红黑树
	void postOrder(RBTNode<T>* tree) const;

	//（递归实现）查找“红黑树x”中键值为key的节点
	RBTNode<T>* search(RBTNode<T>* x, T key) const;
	//（非递归实现）查找“红黑树x”中键值为key的节点
	RBTNode<T>* iterativeSearch(RBTNode<T>* x, T key) const;

	//查找最小节点：返回tree为根节点的红黑树的最小节点
	RBTNode<T>* minimum(RBTNode<T>* tree);
	//查找最大节点：返回tree为根节点的红黑树的最大节点
	RBTNode<T>* maximum(RBTNode<T>* tree);

	//左旋
	void leftRotate(RBTNode<T>*& root, RBTNode<T>* x);
	//右旋
	void rightRotate(RBTNode<T>*& root, RBTNode<T>* y);
	//插入函数
	void insert(RBTNode<T>*& root, RBTNode<T>* node);
	//插入修正函数
	void insertFixup(RBTNode<T>*& root, RBTNode<T>* node);
	//删除函数
	void remove(RBTNode<T>*& root, RBTNode<T>* node);
	//删除修正函数
	void removeFixUp(RBTNode<T>*& root, RBTNode<T>* node, RBTNode<T>* parent);
	//销毁红黑树
	void destory(RBTNode<T>* tree);
	//打印红黑树
	void print(RBTNode<T>* tree, T key, int direction);


//宏定义--------------------------------------------------------
#define rb_parent(r) ((r)->parent)
#define rb_color(r) ((r)->color)
#define rb_is_red(r)((r)->color == RED)
#define rb_is_black(r) ((r)->color == BLACK)
#define rb_set_black(r) do{(r)->color = BLACK;}while(0)
#define rb_set_red(r) do{(r)->color = RED;}while(0)
#define rb_set_parent(r,p) do{(r)->parent = (p);}while(0)
#define rb_set_color(r,c) do{(r)->color = (c);}while(0)
//宏定义--------------------------------------------------------

};


