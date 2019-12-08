#include <iostream>
#include <memory>
using namespace std;

class CMyData
{
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() { cout << "~CMyData()" << endl; }
	void TestFunc() { cout << "CMyData::TestFunc()" << endl; }
};

int main()
{
	auto_ptr<CMyData> ptrTest(new CMyData);
	// ptrTest -> 동적생성한 CMyData

	auto_ptr<CMyData> ptrNew;
	cout << "0x" << ptrTest.get() << endl;
	// get() 멤버 함수는 저장된 포인터 주소를 반환합니다.
	ptrTest->TestFunc();

	ptrNew = ptrTest; // ptrTest의 주소값을 ptrNew에게 넘겨준다.
	// 위 문장을 수행하면 원본인 ptrTest는 NULL이 되고, ptrNew가 
	// 동적생성한 CMyData를 가리킨다.

	ptrNew->TestFunc();

	cout << "0x" << ptrTest.get() << endl;
	
	// 따라서 이 코드를 실행할 수 없다.
	//ptrTest->TestFunc();
}