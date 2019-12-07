#include <iostream>

using namespace std;

int same = 2; // 전역변수
int global = 2;

int main()
{
	int same = 3; // 지역변수 (함수의 매개변수도 포함)
	// 지역변수는 함수 또는 범위를
	cout << "전역 변수라면 2를 지역 변수라면 3을 출력합니다." << endl;
	cout << "변수 same " << same << endl;
	cout << "변수 global은 " << global << endl;

	return 0;
}