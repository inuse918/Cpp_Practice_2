#include <iostream>
using namespace std;

#define  multiple_define(A) ((A)*(A))
// ������ �Լ��� �ʹ� �� ��쿡�� �ζ��� �Լ� ȣ���� ���� ���ϰ� �Ǹ�
// ȣ���� �Լ��� �ڵ尡 ������� ������ �ִ�.
// ���� �ζ��� �Լ� ���Ǵ� �Լ��� �ڵ尡 ���� �� �����ϴ�.
int multiple_inline(int A);

int main()
{
	int a = 3;
	cout << "inline �Լ��� ���� " << multiple_inline(++a) << endl;
	a = 3;
	cout << "define ��ũ���� ���� " << multiple_define(++a) << endl;
	return 0;
}

inline int multiple_inline(int A)
{
	return A * A;
}