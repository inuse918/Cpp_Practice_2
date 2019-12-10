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
	// T1�� int ������ T2�� double ������ ��ȯ�Ǿ Ŭ������ ������� �� b��ü�� �����ȴ�.
	b.setFirst(100); // �Լ��� ȣ��Ǹ鼭 ��������� �������� ����ȴ�.
	b.setSecond(5.67); // �Լ��� ȣ��Ǹ鼭 ��������� �Ǽ����� ����ȴ�.
	cout << "(" << b.getFirst() << ", " << b.getSecond() << ")";
	return 0;
}