#include <iostream>
using namespace std;

class Ride {
public:
	void rideFunc() {
		cout << "Ÿ��" << endl;
	}
};

class BusRide :public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
};

class AirRide :public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
	}
};
int main()
{
	Ride* r1 = new BusRide();
	r1->rideFunc();
		//r1->age =100;
	Ride* r2 = new AirRide();
	r2->rideFunc();
	return 0;
}