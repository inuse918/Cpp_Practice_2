#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;	

public:
	Animal() { cout << "Aniaml ������() " << endl; }
	~Animal() { cout << "Animal �Ҹ���() " << endl; }

};
class Dog : public Animal {
	int height;
public:
	Dog() { cout << "Dog ������() " << endl; }
	~Dog() { cout << "Dog �Ҹ���()" << endl; }
};

int main()
{
	Dog dog; // ������ ȣ��� ����Ŭ������ �����ڰ� ���� ����ǰ� �� ������ ����Ŭ������ �����ڰ� ����ȴ�.
	return 0; // ���α׷� ����� ��ü�� �Ҹ�ɶ� ���� ��ü�� ���� �Ҹ�ǰ� ���� ��ü�� ���߿� �Ҹ�ȴ�.
}
