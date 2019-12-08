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
		cout << "이름: " << name << "  ";
		cout << "나이: " << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};
int main(void)
{
	Person man1("Lee Mee Rim", 27);
	Person man2(man1); // man2=man1 또는 man2{man1}
	man1.ShowPerson();
	man2.ShowPerson();
	return 0;
	// 프로그램 종료 시 객체가 소멸되면서 소멸자를 실행하면 name 이 가리키는 메모리가 삭제된다.
	// man2 다음에 man1이 삭제될 때, 이미 지워진 name 메모리를
	// 또 삭제 해야하는 상황이 되므로 오류가 발생함.
}