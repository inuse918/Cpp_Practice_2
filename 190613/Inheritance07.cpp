#include <iostream>
using namespace std;

class JumsuOne {
public:
	void FuncOneShow() {
		cout << "JumsuOne" << endl;
	}
};
class RankTwo
{
public:
	void FuncTwoShow() {
		cout << "RankTwo" << endl;
	}
};

class SungjukDerived :protected JumsuOne, protected RankTwo {
public:
	void SungjukFuncShow()
	{
		FuncOneShow();
		FuncOneShow();
	}
};
int main()
{
	SungjukDerived sdr;
	sdr.SungjukFuncShow();
	return 0;
}