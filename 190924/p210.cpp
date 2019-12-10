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

	//vector<int>::itertor iter = v.begin(); ���� �ݺ��� ���� ����
	// �ʱ� ����
	vector<int>::iterator ptr1; // ptr1�� iterator ����
	// ptr1 = v.begin() ==> ���� v�� ���� ù ��° �ּҰ��� ptr1�� ����
	// v.end() ==> ���� v�� ������ ������ ������ �ּҰ�
	// ptr1++ ==> ���� v�� ��� �ִ� �����Ͱ� int(������)�̱� ������ �ּҴ� 4�� �����Ѵ�.
	for (ptr1 = v.begin(); ptr1 != v.end(); ptr1++)
		cout << *ptr1 << "  ";
	cout << endl;

	// C++ 14ver 1
	// auto ptr2 = v.begin() ==> �ڵ����� ptr2 ������ iterator ������ �ȴ�.
	for (auto ptr2 = v.begin; ptr2 != v.end(); ptr2++)
		cout << *ptr2 << "  ";
	cout << endl;

	// C++ 14ver 2
	for (auto& ptr3 : v)
		cout << ptr3 << "  ";

	cout << endl;

	return 0;
}