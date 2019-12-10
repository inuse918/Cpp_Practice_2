#include <iostream>
using namespace std;
class Animal {
public:
	virtual ~Animal(){} //���� �Ҹ����� ����
	virtual void SoundSpeak() = 0;
	// ���� ���� �Լ� : �Լ� �̸��� �����ϰ� �� ���� 0���� ����
	// �Լ��� ����� �ִ� ���
	virtual void EatDiets(const char* eat) const = 0;
	//const�� �ǹ̴� EatDiets() �Լ��� ������ �� �� ��������� �� ����Ұ�

};

class Dog :public Animal {
public:
	virtual void SoundSpeak() {
		cout << "���Ҹ� �۸�" << " ";
	}
	virtual void EatDiets(const char* eat)const {
		cout << eat << endl;
	}
};

class Cat : public Animal {
public:
	virtual void SoundSpeak() { cout << "����� �߿�" << "  "; }
	virtual void EatDiets (const char* eat)const {
		cout << eat << endl;
	}
};

int main()
{
	Dog dog;
	dog.SoundSpeak();
	dog.EatDiets("�� ���");

	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("����� ���");
	return 0;
}