// 콘솔로부터 2개의 정숫값을 입력받아 num1,num2에 저장
// 함수명은 swap_value, swap_pointer,swap_ref 로 해서
// num1과 num2의 값을 바꾸어서 출력하는 프로그램 작성

#include <iostream>
using namespace std;

void swap_value(int num1, int num2);
void swap_pointer(int *num1, int *num2);
void swap_ref(int &num1, int &num2);
int main()
{
	int num1, num2,user;
	cout << "두 개의 정숫값을 입력하세요" << endl;
	cin >> num1>> num2;
	cout << "사용할 함수 선택 "<<endl;
	cout << "1. Call By Value" <<endl<< "2. Call By Pointer" << endl << "3. Call By Reference" << endl<<"입력 : ";
	cin >> user;
	switch (user)
	{
	case 1: swap_value(num1, num2); break;
	case 2: 
		cout << "Call By Pointer" << endl;
		cout << "기존의 num1 : " << num1 << " num2 : " << num2 << endl;
		swap_pointer(&num1, &num2);
		cout << "바꾼후 num1 : " << num1 << " num2 : " << num2 << endl;
		break;
	case 3: 
		cout << "Call By Reference" << endl ;
		cout << "기존의 num1 : " << num1 << " num2 : " << num2 << endl;
		swap_ref(num1, num2);
		cout << "바꾼후 num1 : " << num1 << " num2 : " << num2 << endl;

	default:
		break;
	}
}

void swap_value(int num1, int num2)
{
	cout << "Call By Value" << endl;
	cout << "기존의 num1 : " << num1 << " num2 : " << num2 << endl;
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "바꾼후 num1 : " << num1 << " num2 : " << num2 << endl;
}

void swap_pointer(int *num1, int *num2)
{
	int temp = 0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void swap_ref(int &num1, int &num2)
{
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
}