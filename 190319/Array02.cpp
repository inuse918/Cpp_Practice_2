//�迭�� �հ� ����� ���Ͻÿ�.
#include <iostream>
using namespace std;

int main()
{
	int arr[4] = { 1,2,3,4 };
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += arr[i];
		cout << arr[i] << "  ";
	}
	cout << "\n";
	cout << sum << "\n";
	cout << sum / 4 <<"\n";
	return 0;
}