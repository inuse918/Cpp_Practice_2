#include <iostream>
#include <string>
using namespace std;

class Animal {
	int weight, height;
public:
	Animal() {
		cout << "Animal ������() " << endl;
	}
	Animal(int weight2, int height2) :weight(weight2), height(height2) {
		// : weight(weight2), height(height2) �� �Ű����� weight2, height2�� �ִ� ���� ������� weight, height�� �����ϴ� ������� �ʱ�ȭ ����Ѵ�.
		// �Ϲ� �Լ������� ������� �ʱ�ȭ ��� �Ұ�
		cout << "Animal ������(int weight2, int height2) " << endl;
	}
	~Animal() { cout << "Animal �Ҹ���() " << endl; }
};

class Dog :public Animal {
	int price, volume;
public:
	Dog(int we1, int he1, int pr1, int vo1) :Animal(we1, he1) {
		// : Animal(we1, he1)�� ���� Ŭ������ �����ڸ� ��������� ȣ���Ѵ�. �� �Ű����� 2���� ���� ����Ŭ������ ������ ȣ���� �Ŀ� ���� Ŭ������
		// �����ڸ� �����Ѵ�.
		price = pr1;
		volume = vo1;
		cout << "Dog(int we1, int he1, int pr1, int vo1) " << endl;
	}
	~Dog() { cout << "Dog �Ҹ���() " << endl; }
};
int main()
{
	Dog dog(30, 40, 90, 2000); // �Ű����� 2���� ���� �����ڸ� ȣ���Ѵ�.
	//19�� ���� ȣ��
	return 0;
}
