#pragma once
// ������ʵ��
/*
	.hpp �ļ�һ�����ʵ�ֵ���������
	ͨ������ģ���࣬һ��������ʵ�ֹ�������
	���飺ֻҪ���Ǵ�ģ�壬һ��ʹ��.h��׺��ʹ��.cpp��Ϊ����ʵ���ļ�
*/

/*
	public:		���εĳ�Ա������ط������Է���
	private:	���εĳ�Աֻ�ܹ������У�������Ԫ�����п��Է���
	protected:	���εĳ�Ա���������к��������ຯ������Ԫ�����з���
*/
#include <string>
#include <iostream>
using namespace std;

class LandOwnerV1
{
private:
	string name="��������";			//  ����������
	long score;				//  �����Ļ���
	int cards[20];			//  ��������������

public:
	// ��������Ϊ������
	// �޷���ֵ����
	// ���ã�	1. ��ʼ����������ݳ�Ա
	//			2. ����󱻴���ʱ��������Ϊ��������ڴ�ռ�
	//				���Զ����ù��캯������ɳ�Ա�ĳ�ʼ��
	// ���캯�������ࣺ1.�޲ι��죬2.һ�㹹�죨���ع��죩��3.��������
	LandOwnerV1()	// ��������ʵ����Ĭ�Ϲ��캯��
	{
	}

	~LandOwnerV1()
	{
	}

	inline void TouchCard(int cardCount)
	{
		// ��ʱʡ�Ժ�����ʵ��
		cout << name << "��" << cardCount << "����" << endl;
	}
	void ShowScore() {
		cout << name << "��ǰ�Ļ���Ϊ��" << score << endl;
	}
};

