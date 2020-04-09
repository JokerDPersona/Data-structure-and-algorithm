#include "RBTree.h"

/*
���캯��
*/
template<class T>
RBTree<T>::RBTree()
{
	mRoot = NULL;
}

/*
��������
*/
template<class T>
RBTree<T>::~RBTree()
{
	destory();
}

/*
ǰ�����
*/
template<class T>
void RBTree<T>::preOrder()
{
	preOrder(mRoot);
}

/*
ǰ���������
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
�������
*/
template<class T>
void RBTree<T>::inOrder()
{
	inOrder(mRoot);
}

/*
�����������
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
�������
*/
template<class T>
void RBTree<T>::postOrder()
{
	postOrder(mRoot);
}


/*
�����������
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
���ݹ飩���Һ������ֵΪkey�Ľڵ�
*/
template<class T>
RBTNode<T>* RBTree<T>::search(T key)
{
	search(mRoot, key);
}


/*
���ݹ�ʵ�֣����ҡ������x���м�ֵΪkey�Ľڵ�(����)
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
���ݹ飩���Һ������ֵΪkey�Ľڵ�
*/
template<class T>
RBTNode<T>* RBTree<T>::iterativeSearch(T key)
{
	iterativeSearch(mRoot, key);
}


/*
���ǵݹ�ʵ�֣����ҡ������x���м�ֵΪkey�Ľڵ�
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
������С�ڵ㣺������С��ֵ
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
������С�ڵ㣺����treeΪ���ڵ�ĺ��������С�ڵ�
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
�������ڵ㣺��������ֵ
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
�������ڵ㣺����treeΪ���ڵ�ĺ���������ڵ�
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
�ҽڵ㣨x���ĺ�̽ڵ㡣�����ҡ������������ֵ���ڸýڵ㡱�ġ���С�ڵ㡱��
*/
template<class T>
RBTNode<T>* RBTree<T>::successor(RBTNode<T>* x)
{
	//���x�ڵ�����Һ��ӣ���x�ĺ�̽ڵ�Ϊ�����Һ���Ϊ������������С�ڵ�
	if (x->right != NULL) {
		return minimum(x->right);
	}
	// ���xû���Һ��ӡ���x���������ֿ��ܣ�
	// (01) x��"һ������"����"x�ĺ�̽��"Ϊ "���ĸ����"��
	// (02) x��"һ���Һ���"�������"x����͵ĸ���㣬���Ҹø����Ҫ��������"���ҵ������"��͵ĸ����"����"x�ĺ�̽��"��
	RBTNode<T>* y = x->parent;
	while ((y != NULL) && (x == y->right)) {
		x = y;
		y = y->parent;
	}
	return y;
}

/*
�ҽڵ㣨x����ǰ���ڵ㡣�����ҡ������������ֵС�ڸýڵ㡱�ġ����ڵ㡱��
*/
template<class T>
RBTNode<T>* RBTree<T>::predecessor(RBTNode<T>* x)
{
	// ���x�������ӣ���"x��ǰ�����"Ϊ "��������Ϊ���������������"��
	if (x->left != NULL) {
		return maximum(x->left);
	}

	// ���xû�����ӡ���x���������ֿ��ܣ�
	// (01) x��"һ���Һ���"����"x��ǰ�����"Ϊ "���ĸ����"��
	// (01) x��"һ������"�������"x����͵ĸ���㣬���Ҹø����Ҫ�����Һ���"���ҵ������"��͵ĸ����"����"x��ǰ�����"��
	RBTNode<T>* y = x->parent;
	while ((y != NULL) && (x == y->left)) {
		x = y;
		y = y->parent;
	}
	return y;
}

/*
�Ժ����(x)��������ת
		px								px
	   /							   /
	  x								  y
	 / \		---(����)--->        / \
	lx  y                           x   ry
	   / \                         / \
	 ly   ry                      lx  ly
*/

//������
template<class T>
void RBTree<T>::leftRotate(RBTNode<T>*& root, RBTNode<T>* x) {
	//����x���Һ���Ϊy
	RBTNode<T>* y = x->right;
	//��y��������Ϊx���Һ���
	x->right = y->left;
	//���y�����ӷǿգ���x��Ϊy�����ӵĸ���
	if (y->left != NULL) {
		y->left->parent = x;
	}

	//��x�ĸ�������Ϊy�ĸ���
	y->parent = y->left;

	//���x�ĸ���Ϊ�գ���yΪ���ڵ�
	if (x->parent == NULL) {
		root = y;
	}
	else {
		//���x�������ڵ�����ӣ���yΪx�ĸ��ڵ������
		if (x->parent->left == x) {
			x->parent->left = y;
		}
		//���x�������ڵ���Һ��ӣ���yΪx�ĸ��ڵ���Һ���
		else {
			x->parent->right = y;
		}
	}

	//��x��Ϊy������
	y->left = x;
	//��x�ĸ��ڵ���Ϊy
	x->parent = y;

}


/*
�Ժ����(x)��������ת
		py							   py
	   /							   /
	  y								  x
	 / \		---(����)--->        / \
	x   ry                          lx  y
   / \                                 / \
  lx  rx                              rx  ry
*/
template<class T>
void RBTree<T>::rightRotate(RBTNode<T>*& root, RBTNode<T>* y)
{
	//����x�ǵ�ǰ�ڵ������
	RBTNode<T>* x = y->left;

	//��x���Һ�����Ϊy������
	y->left = x->right;
	//���x���Һ��Ӳ�Ϊ�յĻ���y��Ϊx���Һ��ӵĸ���
	if (x->left = x->right) {
		x->right->parent = y;
	}

	//��y�ĸ�����Ϊx�ĸ���
	x->parent = y->parent;
	if (y->parent == NULL) {
		root = x;
	}
	else {
		//���y�������ڵ���Һ��ӣ�����xΪy�ĸ��ڵ���Һ���
		if (y == y->parent->right) {
			y->parent->right = x;
		}
		//���y�������ڵ�����ӣ�����xΪy�ĸ��ڵ������
		else {
			y->parent->left = x;
		}
	}

	//��y��Ϊx���Һ���
	x->right = y;

	//��y�ĸ��ڵ���Ϊx
	y->parent = x;

}

template<class T>
void RBTree<T>::insert(T key)
{
	RBTNode<T>* z = NULL;

	//��������ڵ�ʧ�ܣ��ͷ���
	if ((z = new RBTNode<T>(key, BLACK, NULL, NULL, NULL)) == NULL) {
		return;
	}

	//�ڲ��ӿ� -- 
	//insert(root, node)�������ǽ�"node"�ڵ���뵽������С�
	//���У�root�Ǹ���node�Ǳ�����ڵ㡣
	insert(mRoot, z);
}

/*
ɾ��������м�ֵΪkey�Ľڵ�
	node������ĸ��ڵ�
*/
template<class T>
void RBTree<T>::remove(T key)
{
	RBTNode<T>* node;

	//���Ҷ�Ӧ�Ľڵ㣨node�����ҵ��Ļ���ɾ���ýڵ�
	if ((node = search(mRoot, key)) != NULL) {
		remove(mRoot, node);
	}
}

/*
���ٺ����
*/
template<class T>
void RBTree<T>::destory()
{
	destory(mRoot);
}

/*
���ٺ����(����)
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
��ӡ�����
*/
template<class T>
void RBTree<T>::print()
{
	if (mRoot != NULL) {
		print(mRoot, mRoot->key, 0);
	}
}

/*
��ӡ�����(����)
*/
template<class T>
void RBTree<T>::print(RBTNode<T>* tree, T key, int direction)
{
	if (tree != NULL) {
		//tree�Ǹ��ڵ�
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
���ڵ���뵽�������
����˵����
	root������ĸ��ڵ�
	node����Ľڵ�
*/
template<class T>
void RBTree<T>::insert(RBTNode<T>*& root, RBTNode<T>* node)
{
	RBTNode<T>* y = NULL;
	RBTNode<T>* x = root;

	//������������������������ӽڵ㵽�����������
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

	//���ýڵ����ɫΪ��ɫ
	node->color = RED;

	//������������Ϊһ�ź����
	insertFixup(root, node);

}


/*
�����������������

�ں��������ڵ��ʧȥƽ�⣩ʱ���øú���
Ŀ���ǽ������������һ�ź����
*/
template<class T>
void RBTree<T>::insertFixup(RBTNode<T>*& root, RBTNode<T>* node)
{
	RBTNode<T>* parent, * gparent;

	//���Ǹ��ڵ���ڣ��Ҹ��ڵ���ɫ�Ǻ�ɫ
	while ((parent = rb_parent(node)) && rb_is_red(parent)) {
		gparent = rb_parent(parent);
		//�����ڵ����游�ڵ������
		if (parent == gparent->left) {
			RBTNode<T>* uncle = gparent->right;
			//����ڵ�Ϊ��ɫ
			if (uncle && rb_is_red(uncle)) {
				rb_set_black(uncle);
				rb_set_black(parent);
				rb_set_red(gparent);
				node = gparent;
				continue;
			}
			else {
				//����Ϊ��ɫ���ҵ�ǰ�ڵ�Ϊ�Һ���
				if (parent->right == node) {
					RBTNode<T>* temp;
					leftRotate(root, parent);
					temp = parent;
					parent = node;
					node = temp;
				}
				else {
					//����Ϊ��ɫ���ҵ�ǰ�ڵ�������
					rb_set_black(parent);
					rb_set_red(gparent);
					rightRotate(root, gparent);
				}
			}
		}
		//��z�ĸ��ڵ���z���游�ڵ���Һ���
		else {
			RBTNode<T>* uncle = gparent->left;
			//����ڵ�Ϊ��ɫ
			if (uncle && rb_is_red(uncle)) {
				rb_set_black(uncle);
				rb_set_black(parent);
				rb_set_red(gparent);
				node = gparent;
				continue;
			}
			//����Ϊ��ɫ���ҵ�ǰ�ڵ�������
			else {
				if (parent->left == node) {
					RBTNode<T>* temp;
					rightRotate(root, parent);
					temp = parent;
					parent = node;
					node = temp;
				}
				//����Ϊ��ɫ���ҵ�ǰ�ڵ����Һ���
				else {
					rb_set_black(parent);
					rb_set_red(gparent);
					leftRotate(root, gparent);
				}
			}
		}
	}
	//���ڵ���Ϊ��ɫ
	rb_set_black(root);
}

/*
ɾ���ڵ㣨node���������ر�ɾ���Ľڵ�
	root ������ĸ��ڵ�
	node ɾ���Ľڵ�
*/
template<class T>
void RBTree<T>::remove(RBTNode<T>*& root, RBTNode<T>* node)
{
	RBTNode<T>* child, * parent;
	RBTColor color;

	//��ɾ���Ľڵ㣬���ҽڵ㶼��Ϊ��
	if ((node->left != NULL) && (node->right != NULL)) {
		//��ɾ���ڵ�ĺ�̽ڵ㣨ȡ���ڵ㣩
		//����ȡ����ɾ�ڵ��λ�ã�Ȼ�󽫱�ɾ�ڵ�ȥ��
		RBTNode<T>* replace = node;

		//��ȡ��̽ڵ�
		replace = replace->right;
		while (replace->left != NULL) {
			replace = replace->left;
		}

		//node�ڵ㲻�Ǹ��ڵ㣨���ڵ��޸��ڵ㣩
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

		//child��ȡ���ڵ���Һ��ӣ�Ҳ����Ҫ�����Ľڵ�
		//ȡ���ڵ�϶����������ӣ���Ϊ����һ����̽ڵ�
		child = replace->right;
		parent = rb_parent(replace);
		//����ȡ���ڵ����ɫ
		color = rb_color(replace);
		//��ɾ���ڵ������ĺ�̽ڵ�ĸ��ڵ�
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
			//ɾ������
			removeFixUp(root, child, parent);
		}
		delete node;
	}
}


/*
�����ɾ����������
	root������ĸ�
	node�������Ľڵ�
*/
template<class T>
void RBTree<T>::removeFixUp(RBTNode<T>*& root, RBTNode<T>* node, RBTNode<T>* parent)
{
	RBTNode<T>* other;

	while ((!node || rb_is_black(node)) && node != root) {
		if (parent->left == node) {
			other = parent->right;
			//x���ֵ�w�Ǻ�ɫ
			if (rb_is_red(other)) {
				rb_set_black(other);
				rb_set_red(parent);
				leftRotate(root, parent);
				other = parent->right;
			}
			//x���ֵ�w�Ǻ�ɫ����w����������Ҳ���Ǻ�ɫ
			if ((!other->left || rb_is_black(other->left)) && 
				(!other->right || rb_is_black(other->right))) {
				rb_set_red(other);
				node = parent;
				parent = rb_parent(node);
			}
			else {
				//x���ֵ�w�Ǻ�ɫ����w�������Ǻ�ɫ���Һ����Ǻ�ɫ
				if (!other->right || rb_is_black(other->right)) {
					rb_set_black(other->left);
					rb_set_red(other);
					rightRotate(root, other);
					other = parent->right;
				}
				//x���ֵ�w�Ǻ�ɫ����w���Һ����Ǻ�ɫ������������ɫ
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
			//x���ֵ�w�Ǻ�ɫ
			if (rb_is_red(other)) {
				rb_set_black(other);
				rb_set_red(parent);
				rightRotate(root, parent);
				other = parent->left;
			}

			//x���ֵ�w�Ǻ�ɫ����w���������Ӷ��Ǻ�ɫ
			if ((!other->left || rb_is_black(other->left)) &&
				(!other->right || rb_is_black(other->right))) {
				rb_set_red(other);
				node = parent;
				parent = rb_parent(node);
			}
			else {
				//x���ֵ�w�Ǻ�ɫ����w�������Ǻ�ɫ���Һ����Ǻ�ɫ
				if (!other->left || rb_is_black(other->left)) {
					rb_set_black(other->right);
					rb_set_red(other);
					leftRotate(root, other);
					other = parent->left;
				}
				//x���ֵ�w�Ǻ�ɫ����w���Һ����Ǻ�ɫ�������Ǻ�ɫ
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

