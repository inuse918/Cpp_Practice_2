#include <iostream>
using namespace std;

//매개변수 2개 이상을 갖는 함수(sum)를 호출할 수 있다.

int sum(int x, int y, int z = 0, int w = 0)
{
	return x + y + z + w;
}

int main()
{
	cout << "sum(10,15)=" << sum(10, 15) << endl;
	cout << "sum(10,15,25)=" << sum(10, 15, 25) << endl;
	cout << "sum(10,15,25,30)=" << sum(10, 15, 25, 30) << endl;
}