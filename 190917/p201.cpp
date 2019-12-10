#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Box {
	T1 data1;
	T2 data2;
public:
	Box() {}
	T1 getFirst();
	T2 getSecond();
	void setFirst(T1 value) {
		data1 = value;
	}
	void setSecond(T2 value) {
		data2 = value;
	}
};

template <typename T1,typename T2>
T1 Box<T1, T2>::getFirst() {
	return data1;
}

template <typename T1,typename T2>
T2 Box<T1, T2>::getSecond() {
	return data;
}
int main()
{
	Box<int, double> b;
	// T1은 int 형으로 T2는 double 형으로 변환되어서 클래스가 만들어진 후 b객체가 생성된다.
	b.setFirst(100); // 함수가 호출되면서 멤버변수에 정수값이 저장된다.
	b.setSecond(5.67); // 함수가 호출되면서 멤버변수에 실수값이 저장된다.
	cout << "(" << b.getFirst() << ", " << b.getSecond() << ")";
	return 0;
}