#include <iostream>
using namespace std;

class Car {
	int ton, price;
public:
	static int count; //정적 변수
	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton = ton; this->price = price;
		count++;
	}
	~Car() { // 프로그램 종료시 객체 생성의 역순으로 소멸자가 호출된다.
		count--;
	}
};

int Car::count = 0;	// main() 밖에서 초기값을 설정

int main()
{
	Car car1;
	cout << "생성된 자동차의 수 : " << Car::count << endl; // 클래스 : 객체 .
	// Car는 클래스 이름으로, 정적변수에 접근할 때 :: 을 사용한다.
	cout << "생성된 자동차의 수 : " << car1.count << endl;
	// car1은 객체변수로 정적변수에 접근할 때 . 을 사용한다.
	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << Car::count << endl;

	return 0;
}