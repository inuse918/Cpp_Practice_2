#include <iostream>
using namespace std;

class Point
{
private: // ���� �����ϴ� (�׷��� default ���� private�� �����Ǿ� �ִ�.)
	int x;
	int y;
	void Print()
	{
		cout << "x ��ǥ�� " << x << endl;
		cout << "y ��ǥ�� " << y << endl;
	}
};

int main()
{
	Point point = { 1,2 };
	point.Print();
	// Print() �Լ��� ȣ���Ҷ����� �ڵ��� inline�� �ȴ�.
}