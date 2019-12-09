#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	Book(Book& rhs);
	void set(const char* title, int price);
	~Book();
	void show();
};
Book::Book(const char* title, int price) {
	title = new char;
	price = new int
}
void Book::set(const char* title, int price) {
	title = title;
	this->price = price;
}
Book::~Book() { delete title; }
Book::Book(Book& rhs) {
	title = title;
	this->price = price;
}
int main() {
	Book cpp("C++은 재미있다.", 35000);
	Book java = cpp;
	java.set("JAVA는 재미없다.", 25000);
	cpp.show();
	java.show();
}
