#include <iostream>
#include <cmath>
#include <iomanip>	// ���Ʒ�ͷ�ļ�
using namespace std;

int main()
{
	// ����cout����ʾ����
	// 1. ǿ����С���ķ�ʽ��ʾ
	cout << fixed;
	// 2. ������ʾ����
	cout << setprecision(2);	// ��ʾ��λС��
	// ���double��������
	double doubleNum = 100.0 / 3.0;

	cout << doubleNum * 1000000 << endl;
	
	// ��֪Բ����İ뾶�͸ߣ������
	const float PI = 3.14f;		// const ���峣�������ܸı�
	float radius = 4.5f;
	float height = 90.0f;
	double volume = PI * pow(radius, 2)*height;
	cout << "����ǣ�" << volume << endl;
	
	system("PAUSE");
}