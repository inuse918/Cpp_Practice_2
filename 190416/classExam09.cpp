#include <iostream>
using namespace std;

class Car {
	int ton, price;
public:
	static int count;
	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton = ton; this->price = price;
		count++;
	}
	static int getCount()
	{
		int imsi = 12; // ����
//		return count+price; --> ���� �߻�(price�� ���������� �ƴ�)
//		return count+imsi; --> �����߻� �ȵ�
		return count;
	}
	~Car() { 
		count--;
	}
};

int Car::count = 0;

int main()
{
	Car car1;
	cout << "������ �ڵ����� �� : " << car1.getCount() << endl; 
	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " <<car2.getCount() << endl;

	return 0;
}