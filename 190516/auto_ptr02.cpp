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
		// 속한 범위를 멋어나면 대상 객체는 자동으로 소멸한다. delete 없어도 됨.
		auto_ptr<CMyData> ptrTest(new CMyData[3]);
	}
	cout << "***End***" << endl;
}