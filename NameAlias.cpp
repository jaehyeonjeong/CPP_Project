#include <iostream>

using namespace std;

namespace AAA {
	int num1 = 10;
	int num2 = 100;
	namespace BBB {
		int num1 = 200;
		int num2;
		namespace CCC {
			int num1;
			int num2;
		}
	}
}

namespace ABC = AAA::BBB::CCC;
namespace AB = AAA::BBB;
namespace A = AAA;


int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;
	//namespace ABC = AAA::BBB::CCC;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;

	AB::num2 = 50;

	cout << A::num1 << endl;
	cout << A::num2 << endl;

	cout << AB::num1 << endl;
	cout << AB::num2 << endl;

	return 0;
}