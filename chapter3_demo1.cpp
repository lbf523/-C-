#include <iostream>
#include <Windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	// ��ӡ��������֮��
	SetConsoleTitle(L"ʾ������������֮��");		// https://zhidao.baidu.com/question/474974509.html
	/* �˺� */
	double value_attack = 57.88;
	/* �˺��ɳ� */
	double value_attack_growth = 4.5;
	/* �������� */
	double value_attack_distance = 172;
	/* ����ֵ */
	double value_defence = 27.54;
	/* ����ֵ�ӳ� */
	double value_defence_growth = 3.0;

	cout << "���ƣ���������֮��" << endl;
	cout << "�˺���" << value_attack << "(+" << value_attack_growth << ")\t"
		<< "�������룺" << value_attack_distance << endl;

	system("PAUSE");
	
}