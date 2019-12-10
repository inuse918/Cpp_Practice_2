#include <iostream>
using namespace std;

template<typename T>
void swapTest(T& x, T& y) {
	T temp;
	temp = x;
	x = y;
	y = temp;
}
int main() {
	int x = 10, y = 20;
	double x1 = 10.23, y1 = 20.56;
	cout << "x = " << x << ", y = " << y << endl;
	swapTest<int>(x, y);
	// 함수를 호출할 때 정수타입으로 함수가 만들어진다.
	cout << "x = " << x << ", y = " << y << endl;
	cout << "x1 = " << x1 << ", y1 = " << y1 << endl;
	swapTest<int>(x, y);
	cout << "x1 = " << x1 << ", y1 = " << y1 << endl;

}