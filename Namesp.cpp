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
	cout << "BestCom이 정의한 함수" << endl;
	PrettyFunc();
	ProgComlmpl::SimpleFunc();
}

void ProgComlmpl::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}

void BestComlmpl::PrettyFunc(void)
{
	cout << "BestCom이 정의한 함수(Pretty)" << endl;
}