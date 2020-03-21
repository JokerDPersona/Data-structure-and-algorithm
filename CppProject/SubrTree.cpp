//#include "SubrTree.h"
//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
//template<typename T>
//SubrTree<T>::SubrTree()
//{
//	LeftChild = RightChild = 0;
//}
//
//template<typename T>
//SubrTree<T>::SubrTree(const T& e)
//{
//	data = e;
//	LeftChild = RightChild = 0;
//}
//
//template<typename T>
//SubrTree<T>::SubrTree(const T& e, SubrTree* l, SubrTree* r)
//{
//	data = e;
//	LeftChild = l;
//	RightChild = r;
//}
//
//template<typename T>
//SubrTree<T>::~SubrTree()
//{
//
//}
//
//template<typename T>
//void Visit(SubrTree<T>* t)
//{
//
//}
//
//template<typename T>
//void InOrder(SubrTree<T>* t)
//{
//	if (t) {
//		InOrder(t->LeftChild);
//		Visit(t);
//		InOrder(t->RightChild);
//	}
//}
//
//template<typename T>
//void PreOrder(SubrTree<T>* t)
//{
//	if (t) {
//		Visit(t);
//		PreOrder(t->LeftChild);
//		PreOrder(t->RightChild);
//	}
//}
//
//template<typename T>
//void PostOrder(SubrTree<T>* t)
//{
//	if (t) {
//		PostOrder(t->LeftChild);
//		PostOrder(t->RightChild);
//		Visit(t);
//	}
//}
//
//template<typename T>
//void LevelOrder(SubrTree<T>*)
//{
//
//}
//
////template<typename T>
////void main(void)
////{
////
////}
//
//
//int main() {
//
//	return 0;
//}
