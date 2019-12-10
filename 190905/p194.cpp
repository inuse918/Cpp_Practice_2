#include <string>
#include <iostream>
using namespace std;

template <class T1,class T2> // class 대신 typename
void printShow(T1 a, T2 b) { // T1, T2의 자료형이 다를 경우
	cout << "T1 : " << a;
	cout << ", T2 : " << b << endl;
};
int main(void) {
	string s1 = "Computer", s2 = "Science";
	int num1 = 100, num2 = 200;
	double d1 = 12.34, d2 = 56.78;

	printShow(s1, s2);
	printShow(s1, num1);
	printShow(num1, num2); // 호출하는 함수의 인자값의 자료형에 따라 함수가 만들어진다.
	printShow(num1, d2);
	printShow(d1, d2);
	printShow(d2, d2);

	return 0;
}
