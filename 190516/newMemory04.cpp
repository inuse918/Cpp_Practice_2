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
	// �迭�� new ������ ������ �� ����.
	cout << "main begin" << endl;
	TestC* ptr = new TestC[3];
	// heap ������ ��ü�� �迭���·� �޸� �Ҵ�
	// �迭�� ������ ���� �ݵ�� �迭�� �����ؾ���.
	cout << "Test Cplus" << endl;
	delete[] ptr;
	// heap ������ �Ҵ�� ���(�迭) �޸� ����
	cout << "End" << endl;
	return 0;

}