#include <iostream>
using namespace std;

void sayHello(int n = 1);
int main()
{
	int n = 0;
	cout << "sayHello 출력 개수 입력 : ";
	cin >> n ;
	sayHello(); // 아무것도 넣지않았을 때 (디폴트 1)
	sayHello(n); // 사용자가 넣은 수를 넘김
	cout << endl;
}
void sayHello(int n)
{
	if (n == 1) {
		cout << endl<<"sayHello()->";
	} 
	else {
		cout << endl<<"sayHello(" << n << ")->";
	} // 출력 화면을 맞추기 위한 조건문
	for (int i = 1; i <= n; i++)
	{
		cout << "Hello ";
	} // 출력문
	
}