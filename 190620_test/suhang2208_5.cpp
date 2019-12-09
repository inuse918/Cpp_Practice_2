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
		cout << "이름: " << name << endl;
		cout << "월급: " << salary << endl;
		cout << "보너스: " << bonus << endl;
	}
};

int main()
{
	Manager obj("이사랑", 500, 100);
	obj.print();
	cout << "전체 급여: " << obj.computeSalary() << endl;

}