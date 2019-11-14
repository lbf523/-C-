#pragma once
#include <string>
#include <iostream>
#include <vector>
// ���������㷨ͷ�ļ�
#include <iterator>
#include <algorithm>
// �����ͷ�ļ�
#include <cstdlib>
#include <ctime>
using namespace std;

class LandOwnerV5
{
private:
	string m_Name;
	string m_Sex;
	int m_Gold;
	long m_Exp;
	vector<int> packCards;		// һ���ƣ�1-54
	vector<int> surplusCards;	// ���ƺ�ʣ�µ���
	vector<int> currCards;		// ��ǰ��ҵ�����

	bool isContains(int);		// ʣ�������Ƿ����������
	void deleteCard(vector<int>&, int);		// ɾ�������е���

	string getColor(int);		// ��û�ɫ
	string getValue(int);		// �������
public:
	LandOwnerV5();
	LandOwnerV5(string);
	LandOwnerV5(string, string, int, long);
	~LandOwnerV5();

	string GetName() { return m_Name; }
	void SetName(string val) { m_Name = val; }
	string GetSex() { return m_Sex; }
	void SetSex(string val) { m_Sex = val; }
	int GetGold() { return m_Gold; }
	void SetGold(int val) { m_Gold = val; }
	long GetExp() { return m_Exp; }
	void SetExp(long val) { m_Exp = val; }

	void TouchCard(int);	// ����
	void ShowInfo();
	void InitCards();		// ��ʼ��packCards��surplusCards��currCards
	void ShowCards(const vector<int>&);		// ���������鲢��ʾ
};

