#include <iostream>
using namespace std;
class Ride {
public:
	virtual void rideFunc() {
		cout << "Ÿ��" << endl;
	}
	void rideFunc2() {
		cout << "����" << endl;
	}
};

class BusRide :public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
};
int main()
{
	Ride* r1 = new BusRide();// ����ȯ
	// �������̈������� ����ÿ� ȣ���� �����Ǳ� ������ �ӵ��� ����
	r1->rideFunc();
	//r1->age =100;
	Ride* r2 = new BusRide(); //�������ε����� ������Ÿ�ӿ��� ȣ���� �����Ǳ� ������ �ӵ��� ����

	r2->rideFunc();
	return 0;

}