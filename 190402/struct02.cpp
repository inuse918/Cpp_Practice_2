#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;
} ; // ����ü ��������

int main()
{
	Point point = { 1,2 };
	Point *Ppoint = &point;

	cout << "Ppoint�� ����Ű�� ��ǥ�� ("
		<< (*Ppoint).x << "," << (*Ppoint).y << ")" << endl;

	cout << "Ppoint�� ����Ű�� ��ǥ�� ("
		<<Ppoint->x << "," << Ppoint->y << ")" << endl;

	cout << "Ppoint�� ����Ű�� ��ǥ�� ("
		<< point.x << "," << point.y << ")" << endl;

	return 0;

}