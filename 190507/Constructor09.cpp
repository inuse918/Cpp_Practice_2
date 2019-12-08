#include <iostream>
using namespace std;

class CRefTest {
private:
	int &m_nData;
public:
	// 참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다.
	CRefTest(int rParam) :m_nData(rParam) {
		// rParam은 매개변수이므로 생성자 호출이 끝나면 삭제된다.
		// rParam이 원본이기 때문에 m_nData도 삭제된다
		cout << "생성자" << m_nData << endl;
	};
	int GetData(void) { return m_nData; }
};

int main()
{
	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;

	//참조원본인 a 값이 수정됨

	a = 20;
	cout << t.GetData() << endl;

	return 0;
}