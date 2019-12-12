#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> m;

	m.insert(pair<int, int>(8, 123)); // ���� pair insert()
	m.insert(pair<int, int>(9, 345));
	m.insert(pair<int, int>(7, 234));

	pair<int, int> p(6, 321);
	m.insert(p); // pair ��ü ���� insert()
	m[2] = 300; // key/value ����
	m[4] = 400;
	m[3] = 500;

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first << ", " << (*iter).second << ")" << " ";
	cout << endl;
	// �������� �̿�
	// ������ map�� ��� �ִ� �����͸� key���� �������� ������ �ݺ��ؼ� ����Ѵ�.
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;
	m[4] = 432; // key�� ���� value���� �ٲ� �� �ִ�.
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;

	// pa�� pair(��)�� �����̰�, ù ��° ���ڴ� map�����͸� ����Ű�� ������ �����̰�, �ι�° ���ڴ� boolean Ÿ������ �����Ͱ� ����������
	// ������ �Ǹ� true�� ����ǰ�, ���Կ� �����ϸ� false�� ����ȴ�.
	pair<map<int, int>::iterator, bool > pa;
	pa = m.insert(pair<int, int>(10, 30));	 // insert ��� ����
	if (pa.second)
		cout << "key : " << pa.first->first << ", value : " <<
		pa.first->second << " ���� �Ϸ�!" << endl;
	else
		cout << "key 10�� �̹� m�� �ֽ��ϴ�." << endl;
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;
	// insert ��� ���� (�ߺ� key ����)
	pa = m.insert(pair<int, int>(10, 40));
	if (pa.second)
		cout << "key : " << pa.first->first << ", value : " <<
		pa.first->second << " ���� �Ϸ�! " << endl;
	else
		cout << "key 10�� �̹� m�� �ֽ��ϴ�." << endl;
	return 0;
}