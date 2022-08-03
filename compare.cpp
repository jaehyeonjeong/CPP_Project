#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	char x, y;
	x = -128;
	y = -x;

	printf("%d, %d\n", x, y);
	printf("%u, %u\n", x, y);


	if (x == y) cout << "1" << endl;
	if ((x - y) == 0) cout << "2" << endl;
	if ((x + y) == 2 * x) cout << "3" << endl;
	if (x != -y) cout << "4" << endl;

	return 0;
}