// �γ�9
// ����ѧϰ
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// ʹ�÷��Ͷ�������
	vector<double> vecDouble = { 100.3,213,42.6,23,53.6 };

	// ����Ԫ��
	vecDouble.push_back(32.8);	// ����������һ��ֵ

	// ��ӡ����1:
	for (int i = 0; i < vecDouble.size(); i++) {
		cout << vecDouble[i] << '\t';
	}
	cout << endl;

	// ��ӡ����2��ͨ�÷�����ʹ�õ�����
	cout << "ʹ�õ������ķ�����ӡ" << endl;
	vector<double>::iterator it;	// �õ�һ��ָ��
	// �ӵ�һ��Ԫ�ؿ�ʼ����
	for (it = vecDouble.begin(); it != vecDouble.end(); ++it) {	// ++i:�����л���
		cout << *it << '\t';
	}
	cout << endl;

	// ����
	sort(vecDouble.begin(), vecDouble.end());
	//reverse(vecDouble.begin(), vecDouble.end());	// ����
	for (it = vecDouble.begin(); it != vecDouble.end(); ++it) {	// ++i:�����л���
		cout << *it << '\t';
	}
	cout << endl;

	system("PAUSE");
}