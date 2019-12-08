#include <iostream>
using namespace std;

class Car {
	int ton, price;
public:
	static int count; //���� ����
	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton = ton; this->price = price;
		count++;
	}
	~Car() { // ���α׷� ����� ��ü ������ �������� �Ҹ��ڰ� ȣ��ȴ�.
		count--;
	}
};

int Car::count = 0;	// main() �ۿ��� �ʱⰪ�� ����

int main()
{
	Car car1;
	cout << "������ �ڵ����� �� : " << Car::count << endl; // Ŭ���� : ��ü .
	// Car�� Ŭ���� �̸�����, ���������� ������ �� :: �� ����Ѵ�.
	cout << "������ �ڵ����� �� : " << car1.count << endl;
	// car1�� ��ü������ ���������� ������ �� . �� ����Ѵ�.
	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << Car::count << endl;

	return 0;
}