#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string name;
	int age;
	int salary;
public:
	void getter();
	void setter(string name, int age, int salary);
};
void Employee::getter() 
{
	cout << name << endl;
	cout << age << endl;
	cout << salary << endl;
}
void Employee::setter(string name, int age, int salary)
{
	this->name = name;
	this->age = age;
	this->salary = salary;
}

int main()
{
	Employee employee1;
	employee1.setter("¿ÃπÃ∏≤",29,4500000);
	cout << "Employee1:" << endl;
	employee1.getter();
}