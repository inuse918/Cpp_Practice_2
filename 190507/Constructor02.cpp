#include <iostream>
using namespace std;

class CTest {
public:
	CTest(){cout << "CTest::CTest()" << endl;}
	~CTest(){cout << "~CTest::CTest" << endl;}
};
CTest a; //main 함수 전에 전역변수 객체 생성
//main() 함수 실행 전에 생성
int main()
{
	cout << "Begin" << endl;
	cout << "End" << endl;

	return 0;
}