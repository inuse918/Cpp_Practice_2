#include <iostream>
using namespace std;

class Person {
public:
	void PrintMethod()
	{
		cout << "Person's Method" << endl;
	}
};

class Student :public Person
{
public:
	void PrintMethod()
	{
		Person::PrintMethod();
		// Person클래스의 PrintMethod() 함수를 호출한다.
		std::cout << "Child Method" << std::endl;
	}
};

int main() {
	Student student;
	student.PrintMethod();
	return 0;
}