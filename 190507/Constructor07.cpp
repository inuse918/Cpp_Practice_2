#include <iostream>
using namespace std;

class CRefTest {
private:
	int &m_nData;
public:
	// ������ ����� �ݵ�� ������ �ʱ�ȭ ����� �̿��� �ʱ�ȭ�ȴ�.
	// ������ �ʱ�ȭ ������ ������� ������ ������ �߻��ȴ�.
	CRefTest(int &rParam) :m_nData(rParam) {};
	int GetData(void) { return m_nData; }
};

int main()
{
	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;

	//���������� a ���� ������

	a = 20;
	cout << t.GetData() << endl;

	return 0;
}