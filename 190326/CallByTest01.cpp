// �ַܼκ��� 2���� �������� �Է¹޾� num1,num2�� ����
// �Լ����� swap_value, swap_pointer,swap_ref �� �ؼ�
// num1�� num2�� ���� �ٲپ ����ϴ� ���α׷� �ۼ�

#include <iostream>
using namespace std;

void swap_value(int num1, int num2);
void swap_pointer(int *num1, int *num2);
void swap_ref(int &num1, int &num2);
int main()
{
	int num1, num2,user;
	cout << "�� ���� �������� �Է��ϼ���" << endl;
	cin >> num1>> num2;
	cout << "����� �Լ� ���� "<<endl;
	cout << "1. Call By Value" <<endl<< "2. Call By Pointer" << endl << "3. Call By Reference" << endl<<"�Է� : ";
	cin >> user;
	switch (user)
	{
	case 1: swap_value(num1, num2); break;
	case 2: 
		cout << "Call By Pointer" << endl;
		cout << "������ num1 : " << num1 << " num2 : " << num2 << endl;
		swap_pointer(&num1, &num2);
		cout << "�ٲ��� num1 : " << num1 << " num2 : " << num2 << endl;
		break;
	case 3: 
		cout << "Call By Reference" << endl ;
		cout << "������ num1 : " << num1 << " num2 : " << num2 << endl;
		swap_ref(num1, num2);
		cout << "�ٲ��� num1 : " << num1 << " num2 : " << num2 << endl;

	default:
		break;
	}
}

void swap_value(int num1, int num2)
{
	cout << "Call By Value" << endl;
	cout << "������ num1 : " << num1 << " num2 : " << num2 << endl;
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "�ٲ��� num1 : " << num1 << " num2 : " << num2 << endl;
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