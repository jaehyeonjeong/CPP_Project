#include <iostream>

using namespace std;

namespace BestComlmpl
{
	void SimpleFunc(void);
}

namespace BestComlmpl
{
	void PrettyFunc(void);
}

namespace ProgComlmpl
{
	void SimpleFunc(void);
}


int main()
{
	BestComlmpl::SimpleFunc();
	
	ProgComlmpl::SimpleFunc();

	return 0;
}

void BestComlmpl::SimpleFunc(void)
{
	cout << "BestCom�� ������ �Լ�" << endl;
	PrettyFunc();
	ProgComlmpl::SimpleFunc();
}

void ProgComlmpl::SimpleFunc(void)
{
	cout << "ProgCom�� ������ �Լ�" << endl;
}

void BestComlmpl::PrettyFunc(void)
{
	cout << "BestCom�� ������ �Լ�(Pretty)" << endl;
}