#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;
} point1; // ����ü ��������

int main()
{
	struct Point point2 = { 3,4 }; // C ��Ÿ�� (�ʱⰪ ����)
	Point point3 = { 1,2 }; // C++ ��Ÿ��
	point1.x = 100; // ������ ������ ��
	point1.y = 200;

	point3.x = 123;
	point3.y = 456;

	cout << "�� point1�� ��ǥ�� ("
		<< point1.x << "," << point1.y << ")" << endl;

	cout << "�� point2�� ��ǥ�� ("
		<< point2.x << "," << point2.y << ")" << endl;

	cout << "�� point3�� ��ǥ�� ("
		<< point3.x << "," << point3.y << ")" << endl;

}