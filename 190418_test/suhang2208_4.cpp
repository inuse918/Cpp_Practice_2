#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
	string title;
	string director;
	double rating;
public:
	Movie();
	Movie(string title, string director, double rating);
	void show();
};
Movie::Movie()
{
	title = "Ÿ��Ÿ��";
	director = "���ӽ� ī�޷�";
	rating = 9.5;
}
Movie::Movie(string title, string director, double rating)
{
	this-> title=title;
	this->director = director;
	this->rating = rating;
}
void Movie::show()
{
	cout << "��ȭ ����: " << title << endl;
	cout << "��ȭ ����: " << director << endl;
	cout << "��ȭ ����: " << rating << endl;
}
int main()
{
	Movie m1;
	Movie m2("��������","�� ����",8.34);
	cout << "��ȭ #1" << endl;
	m1.show();
	cout << endl<<"��ȭ #2" << endl;
	m2.show();
	return 0;
}