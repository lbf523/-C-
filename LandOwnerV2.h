#pragma once
#include <string>
#include <iostream>
using namespace std;

class LandOwnerV2
{
public:
	string name;			//  ����������
	long score;							//  �����Ļ���
	int cards[20];						//  ��������������

public:
	LandOwnerV2();
	~LandOwnerV2();

	void TouchCard(int);		// �������ķ���
	void ShowScore();
};

