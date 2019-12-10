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
	cout << "��ġ id: " << ptr->GetSerial() << endl;
}
class CplMouse :public CplUSB {
public:
	CplMouse(int id) { Serial_ID = id; }
	virtual int GetSerial() {
		cout << "����Ʈ �� Ŭ����";
		return Serial_ID;
	}
};
class CellPhone :public CplUSB {
public:
	CellPhone(int id) { Serial_ID = id; }
	virtual int GetSerial() {
		cout << "����Ʈ �� Ŭ����";
		return Serial_ID;
	}
};

int main() {
	CplMouse cm(1234);
	CellPhone cp(5678);

	::GetPrint(&cm); // ::�� �����Լ��� ȣ���� �� 
	//GetPrint()�Լ��� ȣ���� �� CplUSB *ptr=&cm ȣ���� �̷������.
	// ����ȯ�� �Ͼ��. cm�� ���� Ŭ������ CplMouseŬ������ ��ü�̴�.
	GetPrint(&cp);
	// GetPrint()�Լ��� ȣ���� �� CplUSB *ptr=&cp ȣ���� �̷������.
	// ����ȯ�� �Ͼ��. cp�� ���� Ŭ������ CellPhoneŬ������ ��ü�̴�.
	return 0;
}