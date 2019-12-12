#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> m;

	m.insert(pair<int, int>(8, 123)); // 임의 pair insert()
	m.insert(pair<int, int>(9, 345));
	m.insert(pair<int, int>(7, 234));

	pair<int, int> p(6, 321);
	m.insert(p); // pair 객체 생성 insert()
	m[2] = 300; // key/value 삽입
	m[4] = 400;
	m[3] = 500;

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first << ", " << (*iter).second << ")" << " ";
	cout << endl;
	// 참조변수 이용
	// 무조건 map에 들어 있는 데이터를 key값의 오름차순 순으로 반복해서 출력한다.
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;
	m[4] = 432; // key에 따른 value값을 바꿀 수 있다.
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;

	// pa는 pair(쌍)의 구조이고, 첫 번째 인자는 map데이터를 가리키는 포인터 변수이고, 두번째 인자는 boolean 타입으로 데이터가 성공적으로
	// 삽입이 되면 true가 저장되고, 삽입에 실패하면 false가 저장된다.
	pair<map<int, int>::iterator, bool > pa;
	pa = m.insert(pair<int, int>(10, 30));	 // insert 결과 성공
	if (pa.second)
		cout << "key : " << pa.first->first << ", value : " <<
		pa.first->second << " 저장 완료!" << endl;
	else
		cout << "key 10가 이미 m에 있습니다." << endl;
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;
	// insert 결과 실패 (중복 key 삽입)
	pa = m.insert(pair<int, int>(10, 40));
	if (pa.second)
		cout << "key : " << pa.first->first << ", value : " <<
		pa.first->second << " 저장 완료! " << endl;
	else
		cout << "key 10가 이미 m에 있습니다." << endl;
	return 0;
}