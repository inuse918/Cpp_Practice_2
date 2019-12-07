#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;

	void Print();// 함수 선언
}; 
int main()
{
	Point point = { 1,2 };
	point.Print();

	return 0;
}
void Point::Print() // 함수를 정의
{
	cout << "x 좌표는 " << x << endl;
	cout << "y 좌표는 " << y << endl;
}