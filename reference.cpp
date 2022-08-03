#include <iostream>

using namespace std;

int main()
{
	int num = 10;
	int& ref = num;//레퍼런스 변수를 사용할 시는 선언과 동시에 초기화를 해야함.



	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;

	ref = 100;

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;

	cout << "&num = " << &num << endl;
	cout << "&ref = " << &ref << endl;

	int num2, ref2;

	num2 = ref2 = 100;

	cout << num2 << "," << ref2 << endl;
	cout << &num2 << "," << &ref2 << endl;
	//레퍼런스 변수를 선언할 때는 데이터형이 일치하여야 한다.

	return 0;
}