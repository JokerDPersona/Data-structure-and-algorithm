//#include "Tree.h"
//
//int main() {
//	//tree.CreateBinTree();
//	vector<int> arr;
//	arr.push_back(2);
//	arr.push_back(9);
//	arr.push_back(7);
//	arr.push_back(5);
//	arr.push_back(3);
//	arr.push_back(8);
//	arr.push_back(6);
//	arr.push_back(1);
//	arr.push_back(4);
//	sort(arr.begin(), arr.end(), [](int a, int b)->bool {return a > b; });
//
//	Tree mytree;
//	srand((unsigned)time(NULL));
//
//	for (int i = 0; i < 10; ++i) {
//		mytree.insert(rand() % 100);
//	}
//
//	cout << "前序遍历" << endl;
//	mytree.preOrder(mytree.getRoot());
//	cout << endl;
//
//	cout << "中序遍历" << endl;
//	mytree.inOrder(mytree.getRoot());
//	cout << endl;
//
//	cout << "后序遍历" << endl;
//	mytree.lastOrder(mytree.getRoot());
//	cout << endl;
//
//	mytree.levelOrder();
//	cout << endl;
//
//	getchar();
//	return 0;
//}
//
//Tree::Tree()
//{
//	root = nullptr;
//}
//
//Tree::~Tree()
//{
//	clear(root);
//}
//
//void Tree::insert(int data)
//{
//	if (root == nullptr) {
//		root = new BinTreeNode;
//		root->data = data;
//		root->leftchild = root->rightchild = nullptr;
//	}
//	else {
//		BinTreeNode* p, * q;
//		p = root;
//		while (true) {
//			if (p->data <= data) {
//				if (p->rightchild == nullptr)
//				{
//					p->rightchild = new BinTreeNode;
//					//树的右节点的左子节点等于树的右节点的右子节点等于空指针
//					//   p
//					//  / \
//					//  l1  r1
//					//		/ \ 
//					//	   l2 = r2 = nullptr
//					p->rightchild->leftchild = p->rightchild->rightchild = nullptr;
//					p->rightchild->data = data;
//					break;
//				}
//				p = p->rightchild;
//			}
//			else {
//				if (p->leftchild == nullptr) {
//					p->leftchild = new BinTreeNode;
//					//树左节点的左子节点等于树的左子节点的右子节点等于空指针
//					//   p
//					//  / \
//					//  l1  r1
//					//  / \ 
//				    // l2 = r2 = nullptr
//					p->leftchild->leftchild = p->leftchild->rightchild = nullptr;
//					p->leftchild->data = data;
//					break;
//				}
//				p = p->leftchild;
//			}
//		}
//	}
//}
//
//BinTreeNode* Tree::findNode(int data)
//{
//	BinTreeNode* p = root;
//	while (p != nullptr) {
//		if (p->data == data) {
//			break;
//		}
//		else if (p->data < data) {
//			p = p->rightchild;
//		}
//		else
//		{
//			p = p->leftchild;
//		}
//	}
//	return p;
//}
//
//void Tree::preOrder(BinTreeNode* p)
//{
//	if (p != nullptr) {
//		cout << p->data << '\t';
//		preOrder(p->leftchild);
//		preOrder(p->rightchild);
//	}
//}
//
//void Tree::inOrder(BinTreeNode* p)
//{
//	if (p != nullptr) {
//		inOrder(p->leftchild);
//		cout << p->data << '\t';
//		inOrder(p->rightchild);
//	}
//}
//
//void Tree::lastOrder(BinTreeNode* p)
//{
//	if (p != nullptr) {
//		lastOrder(p->leftchild);
//		lastOrder(p->rightchild);
//		cout << p->data << '\t';
//	}
//}
//
//void Tree::clear(BinTreeNode* p)
//{
//	if (p != nullptr) {
//		clear(p->leftchild);
//		clear(p->rightchild);
//		p = nullptr;
//	}
//}
//
//BinTreeNode* Tree::getRoot()
//{
//	return root;
//}
//
//void Tree::levelOrder()
//{
//	list<BinTreeNode*> lis;
//	lis.push_back(root);
//	BinTreeNode* p;
//	while (lis.empty() == 0) {
//		p = lis.front();
//		if (p != nullptr) {
//			lis.push_back(p->leftchild);
//			lis.push_back(p->rightchild);
//		}
//		cout << p->data << '\t';
//	}
//	lis.pop_front();
//}
//
//void Tree::deleteByData(int data)
//{
//	BinTreeNode* p = findNode(data);
//	if (p == nullptr)return;
//	else if (p == root) {
//		if (root->leftchild == nullptr && root->rightchild == nullptr) {
//			delete root;
//			root = nullptr;
//		}
//	}
//	//左边为空右边不为空
//	else if (root->leftchild == nullptr) {
//		root = root->rightchild;
//		delete p;
//	}
//	//右边为空左边不为空
//	else if (root->rightchild == nullptr) {
//		root = root->leftchild;
//		delete p;
//	}
//	else {
//		BinTreeNode* q = root->leftchild;
//		while (q->leftchild != nullptr) {
//			q = q->rightchild;
//		}
//		q->father->rightchild = nullptr;
//		q->father = root->father;
//		q->leftchild = root->leftchild;
//		q->rightchild = root->rightchild;
//		root = q;
//		delete root;
//	}
//}
//
//
//
//
