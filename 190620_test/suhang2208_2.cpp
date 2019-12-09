#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n);
	void read();
	void write();
	int big();
	~Sample();
};
Sample::Sample(int n) {
	size = n;
	p = new int[n];
}
void Sample::write()
{
	for (int i = 0; i < size; i++) {
		cout << p[i] << "  ";
	}
	cout << endl;
}
void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
Sample::~Sample() {
	delete[] p;
}
int Sample::big() {
	int max=p[0];
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (p[j]>=p[i]) {
				max = p[j];
			}
		}
	}
	return max;
}
int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;

}