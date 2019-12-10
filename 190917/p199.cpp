#include <iostream>
using namespace std;

template <class T>
class MyData {
private:
	T mydata;
public:
	void SetData(T pdata) {
		mydata = pdata;
	}
	T GetData() {
		return mydata;
	}
};

void main() {
	MyData<int> mydata1;
	// mdata1의 객체가 생성될 때 MyData의 클래스에 있는 모든 자료형은 
	// int 타입으로 바뀐다.
	MyData<double> mydata2;
	

	mydata1.SetData(5);
	cout << mydata1.GetData() << "  ";

	mydata2.SetData(5.1);
	cout << mydata2.GetData() << endl;
}