#include "FuncPtr.h"

using namespace std;

int main()
{
	// ���庯��ָ��
	//double(*ptrCalc)(double, double);
	auto ptrCalc = addition; // ��Ҫ��ʼ��
	double num1, num2;
	char op;
	cout << "���û�������������";
	cin >> num1 >> num2;
	cout << "���û�+��������";
	cin >> op;
	cout << addition(num1, num2) << endl;

	cout << "-------------" << endl;
	if (op == '+')
		ptrCalc = addition;
	print_result(ptrCalc, num1, num2);

	system("PAUSE");
	return 0;
}