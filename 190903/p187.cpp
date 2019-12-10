#include <iostream>
using namespace std;

class CplUSB {
public:
	CplUSB(){ }
	virtual ~CplUSB() { }
	virtual int GetSerial() = 0;
protected:
	int Serial_ID;
};
void GetPrint(CplUSB* ptr) {
	cout << "장치 id: " << ptr->GetSerial() << endl;
}
class CplMouse :public CplUSB {
public:
	CplMouse(int id) { Serial_ID = id; }
	virtual int GetSerial() {
		cout << "스마트 폰 클래스";
		return Serial_ID;
	}
};
class CellPhone :public CplUSB {
public:
	CellPhone(int id) { Serial_ID = id; }
	virtual int GetSerial() {
		cout << "스마트 폰 클래스";
		return Serial_ID;
	}
};

int main() {
	CplMouse cm(1234);
	CellPhone cp(5678);

	::GetPrint(&cm); // ::는 전역함수를 호출할 때 
	//GetPrint()함수를 호출할 때 CplUSB *ptr=&cm 호출이 이루어진다.
	// 형변환이 일어난다. cm은 하위 클래스인 CplMouse클래스의 객체이다.
	GetPrint(&cp);
	// GetPrint()함수를 호출할 때 CplUSB *ptr=&cp 호출이 이루어진다.
	// 형변환이 일어난다. cp는 하위 클래스인 CellPhone클래스의 객체이다.
	return 0;
}