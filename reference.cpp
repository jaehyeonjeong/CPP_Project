#include <iostream>

using namespace std;

int main()
{
	int num = 10;
	int& ref = num;//���۷��� ������ ����� �ô� ����� ���ÿ� �ʱ�ȭ�� �ؾ���.



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
	//���۷��� ������ ������ ���� ���������� ��ġ�Ͽ��� �Ѵ�.

	return 0;
}