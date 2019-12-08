#include <iostream>
using namespace std;

class TestC
{
	int iData;
public:
	TestC() { cout << "TestC::TestC()" << endl; }
	~TestC() { cout << "TestC::~TestC()" << endl; }
};

int main()
{
	// 배열로 new 연산을 수행할 수 있음.
	cout << "main begin" << endl;
	TestC* ptr = new TestC[3];
	// heap 영역에 객체가 배열형태로 메모리 할당
	// 배열로 생성된 것은 반드시 배열로 삭제해야함.
	cout << "Test Cplus" << endl;
	delete[] ptr;
	// heap 영역에 할당된 모든(배열) 메모리 삭제
	cout << "End" << endl;
	return 0;

}