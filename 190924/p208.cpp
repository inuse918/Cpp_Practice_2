#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(100);
	v.push_back(200);
	v.push_back(300);

	// v.size() ==> 벡터v에 들어있는 데이터의 개수
	for (int i = 0; i < v.size(); i++) // 벡터의 모든 원소 출력
		cout << v[i] << "  "; // v[i]는 벡터의 i번째 원소
	cout << endl;

	v[0] = 123; // 벡터의 첫 번째 원소를 123으로 변경
	int n = v[2]; // n에 300이 저장
	v.at(2) = 500; // 벡터의 3번째 원소를 500으로 변경
	// v.at(2) ==> 벡터 v의 3번째 위치를 가리킨다.

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";
	cout << endl;
}