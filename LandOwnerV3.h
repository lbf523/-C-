#pragma once
// �������η�װ�Ļ�������
#include <string>
#include <iostream>
#include <memory.h>
using namespace std;

class LandOwnerV3
{
	// ʡ����private��Ĭ��Ϊprivate
	// ˽�б�������ǰ���»��� 
	string _name;	//  ����������
	long _score;		//  �����Ļ��֣�������ֱ���ֵΪ��������ķ���������Ա����score�������ز���װ
	int _cards[20];	//  ��������������
public:
	LandOwnerV3();
	~LandOwnerV3();

	// ʹ�á�����\������ ʵ�ֶԳ�Ա�����ķ�װ��Get\Set������
	void SetScore(long);

	void TouchCard(int);		// �������ķ���
	void ShowScore();
};

