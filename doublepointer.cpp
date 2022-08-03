#include <iostream>

using namespace std;

int main()
{
	int value = 100;

	int* pointerValue = &value;

	cout << value << endl;
	cout << &value << endl;
	cout << pointerValue << endl;
	cout << *pointerValue << endl;
	cout << &pointerValue << endl;

	int** ppointerValue = &pointerValue;
	cout << **ppointerValue << endl; //角蔼
	cout << *ppointerValue << endl; //value狼 林家
	cout << ppointerValue << endl; //pointerValue狼 林家
	cout << &ppointerValue << endl; //ppointerValue狼 林家
	return 0;
}