#ifndef FUNCPTR_H_INCLUDE
#define FUNCPTR_H_INCLUDE
// ����ָ��
// �Զ��������
#include <iostream>
using namespace std;

// �ӷ�
double addition(double, double);
// ����
// ����

// ��ӡ������
void print_result(double(*)(double, double), double, double);
// ����ָ�����
void print_result(double(*ptrCalc)(double, double), double num1, double num2)
{
	// ���ú�������ӡ���
	double result = ptrCalc(num1, num2);
	cout << result << endl;
}

double addition(double num1, double num2)
{
	return num1 + num2;
}

#endif // !FUNCPTR_H_INCLUDE

