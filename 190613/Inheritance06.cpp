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
		// PersonŬ������ PrintMethod() �Լ��� ȣ���Ѵ�.
		std::cout << "Child Method" << std::endl;
	}
};

int main() {
	Student student;
	student.PrintMethod();
	return 0;
}