//#include "LinkTable.h"
//#define OK 1
//
//int const ERROR = 1;
//
//LinkTable::LinkTable()
//{
//
//}
//
//
//LinkTable::~LinkTable()
//{
//
//}
//
//Status LinkTable::GetElem(LinkList L, int i, ElemType* e)
//{
//	int j;
//	LinkList p;
//	p = L->Next;
//	j = 1;
//	while (p && j < i) {
//		p = p->Next;
//		++j;
//	}
//	if (!p || j > i) {
//		return ERROR;
//	}
//	*e = p->data;
//	return OK;
//}
//
