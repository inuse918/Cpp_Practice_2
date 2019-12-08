#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a[5];
	cout << "문자열 입력(5자리) : ";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	int max = a[0].size();
	string max2;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (a[i].size() >= a[j].size())
			{
				max = a[i].size();
				max2 = a[i];
			}
			else
			{
				max = a[j].size();
				max2 = a[j];
			}
				
		}
	}

	cout << "가장 긴 문자열 : "<<max2<<endl;
}