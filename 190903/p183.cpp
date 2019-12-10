#include <iostream>
using namespace std;
class Ride {
public:
	virtual void rideFunc() {
		cout << "타다" << endl;
	}
};
class BusRide :public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};

class AirRide :public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}
};

int main()
{
	BusRide br1;
	Ride& r1 = br1;
	r1.rideFunc();

	AirRide ar2;
	Ride &r2 = ar2;
	r2.rideFunc();
	return 0;
}