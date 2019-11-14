#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student
{
public:
	Student();
	Student(int);
	Student(string, string);	// ���ι���
	~Student();
	void ShowInfo();
	// get��set
	string GetName() { return m_Name; }
	void SetName(string val) { m_Name = val; }
	string Getdesc() { return m_desc; }
	void Setdesc(string val) { m_desc = val; }
	int Getage() { return m_age; }
	void Setage(int val) { m_age = val; }

	void InitScores();		// ��ʼ��ѧ���ɼ�����
	void AddScore(float);		// ��ӷ���

	// ����һ��ѧ�Զ��󣬷����ϸߵ�
	Student& GetSuperScholar(Student&);
	// ������β��const�������ڲ��������޸ı��������ñ������const�ͻᱨ��
	//const Student& GetSuperScholar(Student&) const;
	float GetTotal();
private:
	string m_Name;
	string m_desc;
	int m_age;

	// thisָ��
	int scoresCount;	// ѧ���ĳɼ�����
	float* scores;		// ѧ���ķ�������
};

