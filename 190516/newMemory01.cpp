#include <iostream>
using namespace std;

int main()
{
	int* ptr1 = new int;
	*ptr1 = 20;
	cout << *ptr1 << endl;
	delete ptr1; //ptr1�� ����Ű�� heap������ �޸� ����
	return 0;
}