#include <iostream>
using namespace std;

class AccessTest
{
public:
	void ShowJumsu();
	void setJumsu(const int data);
	int getJumsu();
private:
	int jumsu;
};
void AccessTest::ShowJumsu()
{
	cout << "���� : " << jumsu << endl;
}
void AccessTest::setJumsu(const int data)
{
	jumsu = data;
}
int AccessTest::getJumsu()
{
	return jumsu;
}

int main()
{
	AccessTest access;
	access.setJumsu(99);
	cout << "����: " << access.getJumsu() << endl;
	access.ShowJumsu();
}