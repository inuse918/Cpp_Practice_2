#include <iostream>
using namespace std;
class Student
{
private:
	char *name;
	int age;
public:
	Student(const char *myname, int myage)
	{
		int len = strlen(myname) + 1; //myname의 문자열의 길이 +1
		name=new char[len]; // 메모리가 동적할당됨
		strcpy_s(name, len, myname); //myname에 있는 문자열을 len 길이만큼 name에 복사하시오
		age = myage;
	}
	void ShowStudentInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Student() //소멸자 호출은 객체 생성의 역순으로 호출이 일어난다.
		//소멸자는 프로그램이 종료되기 바로 전에 호출된다.
	{
		delete[]name;
		// name은 동적할당을 받았기 때문에 
		// 할당된 모든 배열을 삭제(메모리 삭제)한다.
		// 만약에 "delete name;" [] 기호를 삭제하면 name이 가리키는
		// 첫 번째 요소만 삭제한다.
		cout << "called destructor! " << endl;
	}
};
int main(void)
{
	Student student1("lee mee rim", 33); //매개변수 2개인 생성자 호출
	Student student2("hong gil dong", 34);
	student1.ShowStudentInfo();
	student2.ShowStudentInfo();
	return 0;
}