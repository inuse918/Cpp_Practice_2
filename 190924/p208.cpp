#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(100);
	v.push_back(200);
	v.push_back(300);

	// v.size() ==> ����v�� ����ִ� �������� ����
	for (int i = 0; i < v.size(); i++) // ������ ��� ���� ���
		cout << v[i] << "  "; // v[i]�� ������ i��° ����
	cout << endl;

	v[0] = 123; // ������ ù ��° ���Ҹ� 123���� ����
	int n = v[2]; // n�� 300�� ����
	v.at(2) = 500; // ������ 3��° ���Ҹ� 500���� ����
	// v.at(2) ==> ���� v�� 3��° ��ġ�� ����Ų��.

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";
	cout << endl;
}