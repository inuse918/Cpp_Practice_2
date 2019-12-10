#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> v1; // 벡터를 생성한다.
	// v1에 문자열 데이터의 집합
	v1.push_back("Mirim");
	v1.push_back("Meister");
	v1.push_back("IT_Science");

	for (auto& e : v1) { // 메모리가 생성되기 때문에 메모리 낭비 발생
		cout << "  " << e;
	}// auto& e : ==> v1의 자료형을 따라가기 때문에 string이 된다.
	cout << endl;

	return 0;
}