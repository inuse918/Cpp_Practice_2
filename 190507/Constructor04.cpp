#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	// ������ �Ű������� ���޵� ������ ��� ������ �ʱ�ȭ�Ѵ�.
	CTest(int nParam):m_nData(nParam) // ������� �ʱ�ȭ
	{ 
		cout << "CTest::CTest()" << endl; 
	}
	~CTest() 
	{
		// ������ �� �Ű������� ���� ���� ����Ѵ�.
		cout << "~CTest::CTest" << m_nData<<endl; 
	}
};

int main()
{
	cout << "Begin" << endl;
	CTest a(10); // CTest a; --> �����߻�
	cout << "Begin b" << endl;
	CTest b(20);
	cout << "End" << endl;


	return 0;
}