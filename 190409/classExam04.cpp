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
// Student Ŭ���� ��� �Լ��� ����
Student::Student()
{
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
Student::Student(int nHakbun, const char*sName)
{
	this->nHakbun = nHakbun;
	this->sName = sName;
}
void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�. " << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}
int main()
{
	Student student1;
	Student student2(5678, "������");
	student1.show();
	student2.show();
	return 0;
}