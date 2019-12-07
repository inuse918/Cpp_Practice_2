#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;
} ; // 구조체 전역변수

int main()
{
	Point point = { 1,2 };
	Point *Ppoint = &point;

	cout << "Ppoint가 가리키는 좌표는 ("
		<< (*Ppoint).x << "," << (*Ppoint).y << ")" << endl;

	cout << "Ppoint가 가리키는 좌표는 ("
		<<Ppoint->x << "," << Ppoint->y << ")" << endl;

	cout << "Ppoint가 가리키는 좌표는 ("
		<< point.x << "," << point.y << ")" << endl;

	return 0;

}