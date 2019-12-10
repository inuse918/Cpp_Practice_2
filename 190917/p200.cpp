#include <iostream>
using namespace std;

template <class T>
class MyData {
private:
	T mydata;
public:
	void SetData(T pdata);
	T GetData();
};

//클래스 안에 있는 함수를 클래스 외부에서 정의할 때 
template <class T>
void MyData<T>::SetData(T pdata)
{
	myDdata = pdata;
}

template <class T>
T MyData<T>::GetData()
{
	return mydata;
}

void main() {
	MyData<int> mydata1;
	MyData<double> mydata2;
	mydata1.SetData(5);

	cout << mydata1.GetData() << "  ";
	mydata2.SetData(5.5);
	cout << mydata2.GetData << endl;
}