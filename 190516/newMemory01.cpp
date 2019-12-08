#include <iostream>
using namespace std;

int main()
{
	int* ptr1 = new int;
	*ptr1 = 20;
	cout << *ptr1 << endl;
	delete ptr1; //ptr1이 가리키는 heap영역의 메모리 삭제
	return 0;
}