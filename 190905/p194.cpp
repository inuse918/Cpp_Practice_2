#include <string>
#include <iostream>
using namespace std;

template <class T1,class T2> // class ��� typename
void printShow(T1 a, T2 b) { // T1, T2�� �ڷ����� �ٸ� ���
	cout << "T1 : " << a;
	cout << ", T2 : " << b << endl;
};
int main(void) {
	string s1 = "Computer", s2 = "Science";
	int num1 = 100, num2 = 200;
	double d1 = 12.34, d2 = 56.78;

	printShow(s1, s2);
	printShow(s1, num1);
	printShow(num1, num2); // ȣ���ϴ� �Լ��� ���ڰ��� �ڷ����� ���� �Լ��� ���������.
	printShow(num1, d2);
	printShow(d1, d2);
	printShow(d2, d2);

	return 0;
}
