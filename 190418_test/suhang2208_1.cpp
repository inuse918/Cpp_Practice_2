#include <iostream>
using namespace std;

void sayHello(int n = 1);
int main()
{
	int n = 0;
	cout << "sayHello ��� ���� �Է� : ";
	cin >> n ;
	sayHello(); // �ƹ��͵� �����ʾ��� �� (����Ʈ 1)
	sayHello(n); // ����ڰ� ���� ���� �ѱ�
	cout << endl;
}
void sayHello(int n)
{
	if (n == 1) {
		cout << endl<<"sayHello()->";
	} 
	else {
		cout << endl<<"sayHello(" << n << ")->";
	} // ��� ȭ���� ���߱� ���� ���ǹ�
	for (int i = 1; i <= n; i++)
	{
		cout << "Hello ";
	} // ��¹�
	
}