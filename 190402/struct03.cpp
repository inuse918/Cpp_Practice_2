#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;

	void Print()
	{
		cout << "x ��ǥ�� " << x << endl;
		cout << "y ��ǥ�� " << y << endl;
	}
}; // ����ü ��������

int main()
{
	Point point = { 1,2 };

	point.Print(); 
	// ����Լ��� ȣ���Ͽ� x,y���� �����
	// Print() �Լ��� ����ü ���ο� �Լ��� ���ǰ� �Ǿ� ���� ��쿡
	// Print() �Լ��� ȣ���� ������ inlineȭ�� �Ǿ �ڵ尡 �������.

	return 0;

}