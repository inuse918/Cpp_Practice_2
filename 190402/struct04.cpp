#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;

	void Print();// �Լ� ����
}; 
int main()
{
	Point point = { 1,2 };
	point.Print();

	return 0;
}
void Point::Print() // �Լ��� ����
{
	cout << "x ��ǥ�� " << x << endl;
	cout << "y ��ǥ�� " << y << endl;
}