#include <iostream>
using namespace std;
class Animal {
public:
	virtual ~Animal(){} //가상 소멸자의 선언
	virtual void SoundSpeak() = 0;
	// 순수 가상 함수 : 함수 이름을 선언하고 그 값을 0으로 설정
	// 함수의 헤더만 있는 경우
	virtual void EatDiets(const char* eat) const = 0;
	//const의 의미는 EatDiets() 함수를 재정의 할 때 멤버변수의 값 변경불가

};

class Dog :public Animal {
public:
	virtual void SoundSpeak() {
		cout << "개소리 멍멍" << " ";
	}
	virtual void EatDiets(const char* eat)const {
		cout << eat << endl;
	}
};

class Cat : public Animal {
public:
	virtual void SoundSpeak() { cout << "고양이 야옹" << "  "; }
	virtual void EatDiets (const char* eat)const {
		cout << eat << endl;
	}
};

int main()
{
	Dog dog;
	dog.SoundSpeak();
	dog.EatDiets("개 사료");

	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("고양이 사료");
	return 0;
}