#include <iostream>
#include "integer.h"
#include "ConstDemo.h"
using namespace std;

void TestInteger();

int main()
{
	TestInteger();
	ConstDemo1();
	system("PAUSE");
	return 0;
}

void TestInteger()
{
	integer int1(1024), int2(2048), int3;
	int3 = int1 + int2;
	cout << "int3=int1+int2�Ľ��Ϊ��" << int3.IntValue() << endl;
}