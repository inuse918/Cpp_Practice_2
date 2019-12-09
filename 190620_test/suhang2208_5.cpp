#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
	string name;
	int salary;
public:
	Employee(string theName, int sa);
	string getName() const;
	int computeSalary() const;
};

Employee::Employee(string theName="",int sa=0) {
	name = theName;
	salary = sa;
}
string Employee::getName() const {
	return name;
}
int Employee::computeSalary() const {
	return salary;
}

class Manager :Employee {
	int bonus;
public:
	Manager(string theName, int sa, int bonus) :Employee(theName, sa) {
		this->bonus = bonus;
	}
	int computeSalary() const {
		return bonus + salary;
	}
	void print() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << salary << endl;
		cout << "���ʽ�: " << bonus << endl;
	}
};

int main()
{
	Manager obj("�̻��", 500, 100);
	obj.print();
	cout << "��ü �޿�: " << obj.computeSalary() << endl;

}