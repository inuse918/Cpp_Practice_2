#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}
	~CTest()
	{
		cout << "~CTest::CTest" << m_nData << endl;
	}
};

int main()
{
	cout << "Begin" << endl;

	//new �����ڸ� �̿��� �������� ��ü�� �����Ѵ�.
	CTest *pData = new CTest();
	cout << "Test" << endl;

	//delete �����ڸ� �̿��� ��ü�� �����Ѵ�.
	delete pData; //heap ������ �ִ� �޸� ����
	//�Ҹ��ڸ� ȣ���Ѵ�.
	cout << "End" << endl;


	return 0;
}