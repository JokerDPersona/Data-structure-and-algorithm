#include "RBTree.h"

int main()
{
	int a[] = { 10,40,30,60,90,70,20,50,80 };
	//���붯����⿪��{0:�ر�,1:��}
	int check_insert = 0;
	//ɾ��������⿪��{0:�ر�,1:��}
	int check_remove = 0;
	int i;
	int ilen = (sizeof(a)) / (sizeof(a[0]));
	RBTree<int>* tree = new RBTree<int>();
	cout << "==ԭʼ����:";
	for (i = 0; i < ilen; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;

	for (i = 0; i < ilen; ++i) {
		tree->insert(a[i]);
		if (check_insert) {
			cout << "==��ӽڵ�:" << a[i] << endl;
			cout << "==������ϸ��Ϣ:" << endl;
			tree->print();
			cout << endl;
		}
	}

	cout << "==ǰ�����:";
	tree->preOrder();

	cout << "\n==�������:";
	tree->inOrder();

	cout << "==�������:";
	tree->postOrder();

	cout << "==��Сֵ:" << tree->minimum() << endl;
	cout << "==���ֵ:" << tree->maximum() << endl;
	cout << "==������ϸ��Ϣ:" << endl;
	tree->print();

	//����check_remove=1,����ɾ������
	if (check_remove) {
		for (int i = 0; i < ilen; ++i) {
			tree->remove(a[i]);
			cout << "==ɾ���ڵ�:" << a[i] << endl;
			cout << "==������ϸ��Ϣ:" << endl;
			tree->print();
			cout << endl;
		}
	}

	//���ٺ����
	tree->destory();

	return 0;
}