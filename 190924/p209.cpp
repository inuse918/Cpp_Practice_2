#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> v1; // ���͸� �����Ѵ�.
	// v1�� ���ڿ� �������� ����
	v1.push_back("Mirim");
	v1.push_back("Meister");
	v1.push_back("IT_Science");

	for (auto& e : v1) { // �޸𸮰� �����Ǳ� ������ �޸� ���� �߻�
		cout << "  " << e;
	}// auto& e : ==> v1�� �ڷ����� ���󰡱� ������ string�� �ȴ�.
	cout << endl;

	return 0;
}