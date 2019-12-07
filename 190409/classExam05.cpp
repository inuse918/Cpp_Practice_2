#include <iostream>
using namespace std;

class Student
{
private:
	int nHakbun;
	const char *sName;

public:
	Student();
	Student(int, const char*);
	void show();
};
// Student 클래스 멤버 함수의 정의
Student::Student()
{
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}
Student::Student(int nHakbun, const char*sName)
{
	this->nHakbun = nHakbun;
	this->sName = sName;
}
void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다. " << endl;
	cout << "이름은 " << sName << "입니다." << endl;
}
int main()
{
	Student students[3] = { // 배열 형태로 객체를 생성할 수 있음.
							// student[0],student[1],student[2] 형태의 3개의 객체가 만들어짐
							// student[0] 객체가 생성될 때 Student()를 호출
							// student[1] 객체가 생성될 때 Student(int nHakbun, const char*sName)를 호출
							// student[2] 객체가 생성될 때 Student(int nHakbun, const char*sName)를 호출
		Student(),
		Student(4567,"하와"),
		Student(9876,"아담")
	};
	for (int i = 0; i < 3; i++)
		students[i].show();
	return 0;
}