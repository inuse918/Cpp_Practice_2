#include <iostream>
using namespace std;

int main()
{
	int* ptr2 = new int[4];
	
	for (int i = 0; i < 4; i++)
	{
		ptr2[i] = 10 + i;
		cout << ptr2[i] << " ";
	}
	delete[] ptr2; //ptr2가 가리키는 heap영역의 배열 메모리 전체가 삭제된다.
	return 0;
}