/*********************************************
 * �ļ���: game1.cpp
 * ������: lbf
 * ��  ��: 2019��10��30��
 * ��  ��: C++��һ�׶���Ŀ��С�������ɼǡ�
 * �޸���: someone
 * ��  ��: someday
 * ��  ��: 1.0.0
 * Copyrite (c) ...
*********************************************/
#include <iostream>
#include <iomanip> // ���������ʽ
#include <ctime>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main()
{
	/* ���׵����� */
	string value_father_name;
	/* Ů�������� */
	string value_daughter_name;
	/* Ů�����յ��·� */
	int value_birth_month;
	/* Ů�����յ����� */
	int value_birth_date;
	// Ů��������
	string value_daughter_constell;
	// Ů���Ļ�����Ϣ��
	array<int, 5> value_array_baseinfos;	// ��������
	// �������������
	array<string, 5> value_array_baseinfo_names = { "����","����","����","����","����" };

	int choice, temp1, temp2;
	// �ж�����
	string constell_names[12][2] = {
		{ "ɽ����","ˮƿ��" },	// һ��
		{ "ˮƿ��","˫����" },	// ����
		{ "˫����","������" },	// ����
		{ "������","��ţ��" },	// ����
		{ "��ţ��","˫����" },	// ����
		{ "˫����","��з��" },	// ����
		{ "��з��","ʨ����" },	// ����
		{ "ʨ����","��Ů��" },	// ����
		{ "��Ů��","�����" },	// ����
		{ "�����","��Ы��" },	// ʮ��
		{ "��Ы��","������" },	// ʮһ��
		{ "������","ɽ����" },	// ʮ����
	};
	// 1. Ϊ��Ůȡ����
	cout << "���׵�������";
	cin >> value_father_name;
	cout << "Ů����������";
	cin >> value_daughter_name;

	// 2. ΪŮ��¼���ʼ��Ϣ�����գ�
	cout << "Ů�������գ�MM DD����";
	cin >> value_birth_month >> value_birth_date;
	// ���·ݵĿ��������ڣ�ÿ�����������һ��
	int constell_dates[]{ 20,19,21,20,21,22,23,23,23,24,23,22 };
	// ������ֵ
	value_daughter_constell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
	cout << "----------------------------" << endl;
	cout << "Ů������Ϣ��" << endl;
	cout << "\t������" << value_daughter_name << endl;
	cout << "\t���գ�1659-" << value_birth_month << "-" << value_birth_date << endl;
	cout << "\t������" << value_daughter_constell << endl;

	//    ����Ů�������٣�������Ϸ�Ļ������������������������¡�������
	// 3. ��ʼ��Ϸ��ѭ��
	// ��Ϸ��1659��6�¿�ʼ
	for (int year = 1659; year <= 1659 + 7; year++) {
		for (int month = (year == 1659) ? value_birth_month : 1; month <= 12; month++) {
			// �жϱ����Ƿ���Ů������
			if (month == value_birth_month) {
				cout << "������" << value_daughter_name << "�����գ��Ƿ�Ҫ�����" << endl;
				// �����û�����������ж�
			}
			// ��ʾ��Ϸ���˵�
			cout << "\n1���鿴״̬\n2�������г�\n3������̸��\n4���浵\n5������" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:	// �鿴״̬
				cout << "Ů������Ϣ��" << endl;
				cout << "\t������" << value_daughter_name << endl;
				cout << "\t���գ�1659-" << value_birth_month << "-" << value_birth_date << endl;
				cout << "\t������" << value_daughter_constell << endl;
				// ��ӡ��������
				cout << left;	// �����
				for (int i = 0; i < 5; i++) {
					cout << value_array_baseinfo_names[i] << ":" << setw(6) << value_array_baseinfos[i];
					// ����ʵ�ķ��������
					int solidCount = value_array_baseinfos[i] / 10;
					for (int j = 0; j < 10; j++) {
						if (j < solidCount)
							cout << "��";
						else
							cout << "��";
					}
					cout << endl;
				}
				break;
			default:
				break;
			}
		}
	}
	// 4. ���ݸ���������ж���Ϸ���
	system("PAUSE");
	return 0;
}