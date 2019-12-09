#include <iostream>
using namespace std;
class Ride {
public:
	virtual void rideFunc() {
		cout << "타다" << endl;
	}
	void rideFunc2() {
		cout << "날다" << endl;
	}
};

class BusRide :public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};
int main()
{
	Ride* r1 = new BusRide();// 형변환
	// 동적바이닏ㅇ으로 실행시에 호출이 결정되기 때문에 속도가 느림
	r1->rideFunc();
	//r1->age =100;
	Ride* r2 = new BusRide(); //정적바인딩으로 컴파일타임에서 호출이 결정되기 때문에 속도가 빠름

	r2->rideFunc();
	return 0;

}