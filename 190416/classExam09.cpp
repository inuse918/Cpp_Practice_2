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
		int imsi = 12; // 허용됨
//		return count+price; --> 오류 발생(price는 정적변수가 아님)
//		return count+imsi; --> 오류발생 안됨
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
	cout << "생성된 자동차의 수 : " << car1.getCount() << endl; 
	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " <<car2.getCount() << endl;

	return 0;
}