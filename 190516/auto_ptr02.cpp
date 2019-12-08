#include <iostream>
#include <memory>
using namespace std;

class CMyData
{
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() { cout << "~CMyData()" << endl; }
};

int main()
{
	cout << "***Begin***" << endl;
	{
		// ���� ������ �ھ�� ��� ��ü�� �ڵ����� �Ҹ��Ѵ�. delete ��� ��.
		auto_ptr<CMyData> ptrTest(new CMyData[3]);
	}
	cout << "***End***" << endl;
}