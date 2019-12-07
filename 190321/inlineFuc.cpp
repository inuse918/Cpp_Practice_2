#include <iostream>
using namespace std;

#define  multiple_define(A) ((A)*(A))
// 정의한 함수가 너무 긴 경우에는 인라인 함수 호출을 여러 번하게 되면
// 호출한 함수의 코드가 길어지는 단점이 있다.
// 따라서 인라인 함수 정의는 함수의 코드가 적을 때 유용하다.
int multiple_inline(int A);

int main()
{
	int a = 3;
	cout << "inline 함수의 값은 " << multiple_inline(++a) << endl;
	a = 3;
	cout << "define 매크로의 값은 " << multiple_define(++a) << endl;
	return 0;
}

inline int multiple_inline(int A)
{
	return A * A;
}