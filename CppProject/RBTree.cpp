#include "RBTree.h"

/*
构造函数
*/
template<class T>
RBTree<T>::RBTree()
{
	mRoot = NULL;
}

/*
析构函数
*/
template<class T>
RBTree<T>::~RBTree()
{
	destory();
}

/*
前序遍历
*/
template<class T>
void RBTree<T>::preOrder()
{
	preOrder(mRoot);
}

/*
前序遍历重载
*/
template<class T>
void RBTree<T>::preOrder(RBTNode<T>* tree) const
{
	if (tree != NULL) {
		cout << tree->key << " ";
		preOrder(tree->left);
		preOrder(tree->right);
	}
}

/*
中序遍历
*/
template<class T>
void RBTree<T>::inOrder()
{
	inOrder(mRoot);
}

/*
中序遍历重载
*/
template<class T>
void RBTree<T>::inOrder(RBTNode<T>* tree) const
{
	if (tree != NULL) {
		inOrder(tree->left);
		cout << tree->key << " ";
		inOrder(tree->right);
	}
}

/*
后序遍历
*/
template<class T>
void RBTree<T>::postOrder()
{
	postOrder(mRoot);
}


/*
后序遍历重载
*/
template<class T>
void RBTree<T>::postOrder(RBTNode<T>* tree) const
{
	if (tree != NULL) {
		postOrder(tree->left);
		postOrder(tree->right);
		cout << tree->key << " ";
	}
}

/*
（递归）查找红黑树键值为key的节点
*/
template<class T>
RBTNode<T>* RBTree<T>::search(T key)
{
	search(mRoot, key);
}


/*
（递归实现）查找“红黑树x”中键值为key的节点(重载)
*/
template<class T>
RBTNode<T>* RBTree<T>::search(RBTNode<T>* x, T key) const
{
	if (x == NULL || x->key == key) {
		return x;
	}
	if (key < x->key) {
		return search(x->left, key);
	}
	else {
		return search(x->right, key);
	}
}

/*
（递归）查找红黑树键值为key的节点
*/
template<class T>
RBTNode<T>* RBTree<T>::iterativeSearch(T key)
{
	iterativeSearch(mRoot, key);
}


/*
（非递归实现）查找“红黑树x”中键值为key的节点
*/
template<class T>
RBTNode<T>* RBTree<T>::iterativeSearch(RBTNode<T>* x, T key) const
{
	while ((x != NULL) && (x->key != key)) {
		if (key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	return x;
}

/*
查找最小节点：返回最小键值
*/
template<class T>
T RBTree<T>::minimum()
{
	RBTNode<T>* p = minimum(mRoot);
	if (p != NULL) {
		return p->key;
	}
	return (T)NULL;
}



/*
查找最小节点：返回tree为根节点的红黑树的最小节点
*/
template<class T>
RBTNode<T>* RBTree<T>::minimum(RBTNode<T>* tree)
{
	if (tree == NULL) {
		return NULL;
	}
	while (tree->left != NULL) {
		tree = tree->left;
	}
	return tree;
}

/*
查找最大节点：返回最大键值
*/
template<class T>
T RBTree<T>::maximum()
{
	RBTNode<T>* p = maximum(mRoot);
	if (p != NULL) {
		return p->key;
	}
	return (T)NULL;
}


/*
查找最大节点：返回tree为根节点的红黑树的最大节点
*/
template<class T>
RBTNode<T>* RBTree<T>::maximum(RBTNode<T>* tree)
{
	if (tree == NULL) {
		return NULL;
	}
	while (tree->right != NULL) {
		tree = tree->right;
	}
	return tree;
}

/*
找节点（x）的后继节点。即查找“红黑树中数据值大于该节点”的“最小节点”。
*/
template<class T>
RBTNode<T>* RBTree<T>::successor(RBTNode<T>* x)
{
	//如果x节点存在右孩子，则x的后继节点为以其右孩子为根的子树的最小节点
	if (x->right != NULL) {
		return minimum(x->right);
	}
	// 如果x没有右孩子。则x有以下两种可能：
	// (01) x是"一个左孩子"，则"x的后继结点"为 "它的父结点"。
	// (02) x是"一个右孩子"，则查找"x的最低的父结点，并且该父结点要具有左孩子"，找到的这个"最低的父结点"就是"x的后继结点"。
	RBTNode<T>* y = x->parent;
	while ((y != NULL) && (x == y->right)) {
		x = y;
		y = y->parent;
	}
	return y;
}

/*
找节点（x）的前驱节点。即查找“红黑树中数据值小于该节点”的“最大节点”。
*/
template<class T>
RBTNode<T>* RBTree<T>::predecessor(RBTNode<T>* x)
{
	// 如果x存在左孩子，则"x的前驱结点"为 "以其左孩子为根的子树的最大结点"。
	if (x->left != NULL) {
		return maximum(x->left);
	}

	// 如果x没有左孩子。则x有以下两种可能：
	// (01) x是"一个右孩子"，则"x的前驱结点"为 "它的父结点"。
	// (01) x是"一个左孩子"，则查找"x的最低的父结点，并且该父结点要具有右孩子"，找到的这个"最低的父结点"就是"x的前驱结点"。
	RBTNode<T>* y = x->parent;
	while ((y != NULL) && (x == y->left)) {
		x = y;
		y = y->parent;
	}
	return y;
}

/*
对红黑树(x)进行左旋转
		px								px
	   /							   /
	  x								  y
	 / \		---(左旋)--->        / \
	lx  y                           x   ry
	   / \                         / \
	 ly   ry                      lx  ly
*/

//左旋树
template<class T>
void RBTree<T>::leftRotate(RBTNode<T>*& root, RBTNode<T>* x) {
	//设置x的右孩子为y
	RBTNode<T>* y = x->right;
	//将y的左孩子设为x的右孩子
	x->right = y->left;
	//如果y的左孩子非空，将x设为y的左孩子的父亲
	if (y->left != NULL) {
		y->left->parent = x;
	}

	//将x的父亲设置为y的父亲
	y->parent = y->left;

	//如果x的父亲为空，则y为根节点
	if (x->parent == NULL) {
		root = y;
	}
	else {
		//如果x是它父节点的左孩子，则y为x的父节点的左孩子
		if (x->parent->left == x) {
			x->parent->left = y;
		}
		//如果x是它父节点的右孩子，则y为x的父节点的右孩子
		else {
			x->parent->right = y;
		}
	}

	//将x设为y的左孩子
	y->left = x;
	//将x的父节点设为y
	x->parent = y;

}


/*
对红黑树(x)进行右旋转
		py							   py
	   /							   /
	  y								  x
	 / \		---(右旋)--->        / \
	x   ry                          lx  y
   / \                                 / \
  lx  rx                              rx  ry
*/
template<class T>
void RBTree<T>::rightRotate(RBTNode<T>*& root, RBTNode<T>* y)
{
	//设置x是当前节点的左孩子
	RBTNode<T>* x = y->left;

	//将x的右孩子设为y的左孩子
	y->left = x->right;
	//如果x的右孩子不为空的话将y设为x的右孩子的父亲
	if (x->left = x->right) {
		x->right->parent = y;
	}

	//将y的父亲设为x的父亲
	x->parent = y->parent;
	if (y->parent == NULL) {
		root = x;
	}
	else {
		//如果y是它父节点的右孩子，则设x为y的父节点的右孩子
		if (y == y->parent->right) {
			y->parent->right = x;
		}
		//如果y是它父节点的左孩子，则设x为y的父节点的左孩子
		else {
			y->parent->left = x;
		}
	}

	//将y设为x的右孩子
	x->right = y;

	//将y的父节点设为x
	y->parent = x;

}

template<class T>
void RBTree<T>::insert(T key)
{
	RBTNode<T>* z = NULL;

	//如果创建节点失败，就返回
	if ((z = new RBTNode<T>(key, BLACK, NULL, NULL, NULL)) == NULL) {
		return;
	}

	//内部接口 -- 
	//insert(root, node)的作用是将"node"节点插入到红黑树中。
	//其中，root是根，node是被插入节点。
	insert(mRoot, z);
}

/*
删除红黑树中键值为key的节点
	node红黑树的根节点
*/
template<class T>
void RBTree<T>::remove(T key)
{
	RBTNode<T>* node;

	//查找对应的节点（node），找到的话就删除该节点
	if ((node = search(mRoot, key)) != NULL) {
		remove(mRoot, node);
	}
}

/*
销毁红黑树
*/
template<class T>
void RBTree<T>::destory()
{
	destory(mRoot);
}

/*
销毁红黑树(重载)
*/
template<class T>
void RBTree<T>::destory(RBTNode<T>* tree)
{
	if (tree == NULL) {
		return;
	}
	if (tree->left != NULL) {
		return destory(tree->left);
	}
	else {
		return destory(tree->right);
	}
	delete tree;
	tree = NULL;
}

/*
打印红黑树
*/
template<class T>
void RBTree<T>::print()
{
	if (mRoot != NULL) {
		print(mRoot, mRoot->key, 0);
	}
}

/*
打印红黑树(重载)
*/
template<class T>
void RBTree<T>::print(RBTNode<T>* tree, T key, int direction)
{
	if (tree != NULL) {
		//tree是根节点
		if (direction == 0) {
			cout << setw(2) << tree->key << "(B) is root" << endl;
		}
		else {
			cout << setw(2) << tree->key << (rb_is_red(tree) ? "(R)" : "(B)") << "is" << setw(2) << key << "'s" << setw(12) << (direction == 1 ? "right child" : "left child") << endl;
		}
		print(tree->left, tree->key, -1);
		print(tree->right, tree->key, 1);
	}
}


/*
将节点插入到红黑树中
参数说明：
	root红黑树的根节点
	node插入的节点
*/
template<class T>
void RBTree<T>::insert(RBTNode<T>*& root, RBTNode<T>* node)
{
	RBTNode<T>* y = NULL;
	RBTNode<T>* x = root;

	//将红黑树当作二叉查找树，添加节点到二叉查找树中
	while (x != NULL) {
		y = x;
		if (node->key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}

	node->parent = y;
	if (y != NULL) {
		if (node->key < y->key) {
			y->left = node;
		}
		else {
			y->right = node;
		}
	}
	else {
		root = node;
	}

	//设置节点的颜色为红色
	node->color = RED;

	//将它重新修正为一颗红黑树
	insertFixup(root, node);

}


/*
红黑树插入修正函数

在红黑树插入节点后（失去平衡）时调用该函数
目的是将它重新塑造成一颗红黑树
*/
template<class T>
void RBTree<T>::insertFixup(RBTNode<T>*& root, RBTNode<T>* node)
{
	RBTNode<T>* parent, * gparent;

	//若是父节点存在，且父节点颜色是红色
	while ((parent = rb_parent(node)) && rb_is_red(parent)) {
		gparent = rb_parent(parent);
		//若父节点是祖父节点的左孩子
		if (parent == gparent->left) {
			RBTNode<T>* uncle = gparent->right;
			//叔叔节点为红色
			if (uncle && rb_is_red(uncle)) {
				rb_set_black(uncle);
				rb_set_black(parent);
				rb_set_red(gparent);
				node = gparent;
				continue;
			}
			else {
				//叔叔为黑色，且当前节点为右孩子
				if (parent->right == node) {
					RBTNode<T>* temp;
					leftRotate(root, parent);
					temp = parent;
					parent = node;
					node = temp;
				}
				else {
					//叔叔为黑色，且当前节点是左孩子
					rb_set_black(parent);
					rb_set_red(gparent);
					rightRotate(root, gparent);
				}
			}
		}
		//若z的父节点是z的祖父节点的右孩子
		else {
			RBTNode<T>* uncle = gparent->left;
			//叔叔节点为红色
			if (uncle && rb_is_red(uncle)) {
				rb_set_black(uncle);
				rb_set_black(parent);
				rb_set_red(gparent);
				node = gparent;
				continue;
			}
			//叔叔为黑色，且当前节点是左孩子
			else {
				if (parent->left == node) {
					RBTNode<T>* temp;
					rightRotate(root, parent);
					temp = parent;
					parent = node;
					node = temp;
				}
				//叔叔为黑色，且当前节点是右孩子
				else {
					rb_set_black(parent);
					rb_set_red(gparent);
					leftRotate(root, gparent);
				}
			}
		}
	}
	//根节点设为黑色
	rb_set_black(root);
}

/*
删除节点（node），并返回被删除的节点
	root 红黑树的根节点
	node 删除的节点
*/
template<class T>
void RBTree<T>::remove(RBTNode<T>*& root, RBTNode<T>* node)
{
	RBTNode<T>* child, * parent;
	RBTColor color;

	//被删除的节点，左右节点都不为空
	if ((node->left != NULL) && (node->right != NULL)) {
		//被删除节点的后继节点（取代节点）
		//用它取代被删节点的位置，然后将被删节点去除
		RBTNode<T>* replace = node;

		//获取后继节点
		replace = replace->right;
		while (replace->left != NULL) {
			replace = replace->left;
		}

		//node节点不是根节点（根节点无父节点）
		if (rb_parent(node)) {
			if (rb_parent(node)->left == node) {
				rb_parent(node)->left = replace;
			}
			else {
				rb_parent(node)->right = replace;
			}
		}
		else {
			root = replace;
		}

		//child是取代节点的右孩子，也是需要调整的节点
		//取代节点肯定不存在左孩子，因为它是一个后继节点
		child = replace->right;
		parent = rb_parent(replace);
		//保存取代节点的颜色
		color = rb_color(replace);
		//被删除节点是它的后继节点的父节点
		if (parent == node) {
			parent = replace;
		}
		else {
			if (child) {
				rb_set_parent(child, parent);
			}
			parent->left = child;
			replace->right = node->right;
			rb_set_parent(node->right, replace);
		}

		replace->parent = node->parent;
		replace->color = node->color;
		replace->left = node->left;
		node->left->parent = replace;

		if (color == BLACK) {
			//删除修正
			removeFixUp(root, child, parent);
		}
		delete node;
	}
}


/*
红黑树删除修正函数
	root红黑树的根
	node待修正的节点
*/
template<class T>
void RBTree<T>::removeFixUp(RBTNode<T>*& root, RBTNode<T>* node, RBTNode<T>* parent)
{
	RBTNode<T>* other;

	while ((!node || rb_is_black(node)) && node != root) {
		if (parent->left == node) {
			other = parent->right;
			//x的兄弟w是红色
			if (rb_is_red(other)) {
				rb_set_black(other);
				rb_set_red(parent);
				leftRotate(root, parent);
				other = parent->right;
			}
			//x的兄弟w是黑色，且w的两个孩子也都是黑色
			if ((!other->left || rb_is_black(other->left)) && 
				(!other->right || rb_is_black(other->right))) {
				rb_set_red(other);
				node = parent;
				parent = rb_parent(node);
			}
			else {
				//x的兄弟w是黑色，且w的左孩子是红色，右孩子是黑色
				if (!other->right || rb_is_black(other->right)) {
					rb_set_black(other->left);
					rb_set_red(other);
					rightRotate(root, other);
					other = parent->right;
				}
				//x的兄弟w是黑色，且w的右孩子是红色，左孩子任意颜色
				rb_set_color(other, rb_color(parent));
				rb_set_black(parent);
				rb_set_black(other->right);
				leftRotate(root, parent);
				node = root;
				break;
			}
		}
		else {
			other = parent->left;
			//x的兄弟w是红色
			if (rb_is_red(other)) {
				rb_set_black(other);
				rb_set_red(parent);
				rightRotate(root, parent);
				other = parent->left;
			}

			//x的兄弟w是黑色，且w的两个孩子都是黑色
			if ((!other->left || rb_is_black(other->left)) &&
				(!other->right || rb_is_black(other->right))) {
				rb_set_red(other);
				node = parent;
				parent = rb_parent(node);
			}
			else {
				//x的兄弟w是黑色，且w的左孩子是红色，右孩子是黑色
				if (!other->left || rb_is_black(other->left)) {
					rb_set_black(other->right);
					rb_set_red(other);
					leftRotate(root, other);
					other = parent->left;
				}
				//x的兄弟w是黑色，且w的右孩子是红色，左孩子是黑色
				rb_set_color(other, rb_color(parent));
				rb_set_black(parent);
				rb_set_black(other->left);
				rightRotate(root, parent);
				node = root;
				break;
			}
		}
	}
	if (node) {
		rb_set_black(node);
	}
}

