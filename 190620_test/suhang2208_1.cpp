#include <iostream>
#include <string>
using namespace std;
class BankAccount {
	string number;
	int balance;
public:
	void init(string, int);
	void deposit(int amount);
	void withdraw(int amount);
	int getBalance() const;
	void setBalance(int balance);
	const string& getNumber() const;
	void setNumber(const string& number);
};

void BankAccount::setBalance(int balance) {
	this->balance = balance;
}
int BankAccount::getBalance() const {
	return balance;
}
void BankAccount::deposit(int amount) {
	balance += amount;
}
void BankAccount::withdraw(int amount) {
	if (balance - amount < 0) {
		cout << "�ܾ��� ������" << endl;
	}
	else {
		balance -= amount;
	}
}
void BankAccount::setNumber(const string& number) {
	this->number = number;
}
const string& BankAccount:: getNumber() const {
	return number;
}
void BankAccount::init(string number, int balance) {
	setNumber(number);
	setBalance(balance);
}
int main() {
	BankAccount obj;
	obj.init("010-1111-2222", 1000000);
	cout << "���� �ܾ�: " << obj.getBalance() << endl;
	obj.deposit(3000000);
	cout << "3000000�� �Ա� �� ���� �ܾ�: " << obj.getBalance() << endl;
	obj.withdraw(2000000);
	cout << "2000000�� ��� �� ���� �ܾ�: " << obj.getBalance() << endl;
	obj.withdraw(5000000);
	return 0;
}
