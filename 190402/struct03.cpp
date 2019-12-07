#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;

	void Print()
	{
		cout << "x 좌표는 " << x << endl;
		cout << "y 좌표는 " << y << endl;
	}
}; // 구조체 전역변수

int main()
{
	Point point = { 1,2 };

	point.Print(); 
	// 멤버함수를 호출하여 x,y값을 출력함
	// Print() 함수는 구조체 내부에 함수가 정의가 되어 있을 경우에
	// Print() 함수를 호출할 때마다 inline화가 되어서 코드가 길어진다.

	return 0;

}