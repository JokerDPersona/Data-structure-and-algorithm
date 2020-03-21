//#include "Human.h"
//#include<iostream>
//using namespace std;
//
//
//
//
//Human::Human()
//{
//
//}
//
//
//Human::~Human()
//{
//
//}
//
//void Human::Talk(string textToTalk)
//{
//	this->name = textToTalk;
//	cout << name << endl;
//}
//
//void Human::IntroduceSelf()
//{
//
//}
//
//int Human::bsearch(int* list, int n, int value)
//{
//	int low = 0;
//	int high = n - 1;
//
//	while (low <= high) {
//		int mid = (low + high) >> 1;
//		if (list[mid] == value) {
//			return mid;
//		}
//		else if (list[mid] < value) {
//			high = mid - 1;
//		}
//	}
//
//	return -1;
//}
//
//int main() {
//	Human* hm = new Human();
//	hm->Talk("Hello World");
//
//	cout << hm->GetName() << endl;
//
//	hm->SetdateOfBirth("1997-08-10");
//
//	cout << hm->GetdateOfBirth() << endl;
//	int RandomList[] = { 2,6,5,8,7,9,5,4,6,2,123,85,786,45,34,86,42,78,32,41,86,32,456,7896,5,498,56,40 };
//
//	for (int i = 0; i < 28; i++) {
//		cout << RandomList[i] << "  ";
//	}
//
//	int* IntList = RandomList;
//
//	hm->bsearch(IntList, 28, 2);
//
//	for (int i = 0; i < 28; i++) {
//		cout << RandomList[i] << "  ";
//	}
//	
//
//	delete hm;
//
//	//getchar();
//	return 0;
//}
