//#include <iostream>
//#include<cmath>
//
//using namespace std;
//
//struct rect {
//	double x;
//	double y;
//};
//
//struct polar {
//	double distance;
//	double angle;
//};
//
//void show_polar(const polar *pda);
//void rect_to_polar(const rect* pxy, polar* pda);
//
//int main() {
//	rect rplace;
//	polar pplace;
//	cout << "Enter the x and y values:";
//	//ֻҪ�������־�����ѭ��
//	while (cin >> rplace.x >> rplace.y)
//	{
//		rect_to_polar(&rplace, &pplace);
//		show_polar(&pplace);//����ַ��ȥ��ʡʱ��Ϳռ�
//		cout << "Next two numbers (q to quit):";
//	}
//	cout << "Done.\n";
//	return 0;
//}
//
//void show_polar(const polar *pda) {
//	const double Rad_to_deg = 57.09577951;
//	cout << "distance=" << pda->distance;
//	cout << ",angle=" << pda->angle * Rad_to_deg;
//	cout << "degrees\n";
//}
//
////����ֱ���޸Ľṹ�ķ�ʽ�������ٻش��ṹ
//void rect_to_polar(const rect* pxy, polar* pda) {
//	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//}
//
//
//
