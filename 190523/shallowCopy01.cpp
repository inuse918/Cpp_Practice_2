#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char *name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, 20, myname);
		age = myage;
	}
	void ShowPerson() const {
		cout << "�̸�: " << name << "  ";
		cout << "����: " << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};
int main(void)
{
	Person man1("Lee Mee Rim", 27);
	Person man2(man1); // man2=man1 �Ǵ� man2{man1}
	man1.ShowPerson();
	man2.ShowPerson();
	return 0;
	// ���α׷� ���� �� ��ü�� �Ҹ�Ǹ鼭 �Ҹ��ڸ� �����ϸ� name �� ����Ű�� �޸𸮰� �����ȴ�.
	// man2 ������ man1�� ������ ��, �̹� ������ name �޸𸮸�
	// �� ���� �ؾ��ϴ� ��Ȳ�� �ǹǷ� ������ �߻���.
}