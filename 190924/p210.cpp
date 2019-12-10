#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//vector<int>::itertor iter = v.begin(); 벡터 반복자 시작 지점
	// 초기 버전
	vector<int>::iterator ptr1; // ptr1은 iterator 변수
	// ptr1 = v.begin() ==> 벡터 v의 시작 첫 번째 주소값을 ptr1에 저장
	// v.end() ==> 벡터 v의 마지막 데이터 다음의 주소값
	// ptr1++ ==> 벡터 v에 들어 있는 데이터가 int(정수형)이기 때문에 주소는 4씩 증가한다.
	for (ptr1 = v.begin(); ptr1 != v.end(); ptr1++)
		cout << *ptr1 << "  ";
	cout << endl;

	// C++ 14ver 1
	// auto ptr2 = v.begin() ==> 자동으로 ptr2 변수가 iterator 변수가 된다.
	for (auto ptr2 = v.begin; ptr2 != v.end(); ptr2++)
		cout << *ptr2 << "  ";
	cout << endl;

	// C++ 14ver 2
	for (auto& ptr3 : v)
		cout << ptr3 << "  ";

	cout << endl;

	return 0;
}