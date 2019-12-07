#include <iostream>
using namespace std;

class Point
{
private: // 생략 가능하다 (그러나 default 값은 private로 설정되어 있다.)
	int x;
	int y;
	void Print()
	{
		cout << "x 좌표는 " << x << endl;
		cout << "y 좌표는 " << y << endl;
	}
};

int main()
{
	Point point = { 1,2 };
	point.Print();
	// Print() 함수를 호출할때마다 코드의 inline이 된다.
}