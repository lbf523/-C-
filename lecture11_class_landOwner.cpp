// ���������
// ʹ��class
// �������ļ�
#include <iostream>
#include "LandOwnerV1.hpp"	// ���Ҫʹ���࣬��ô����������ͷ�ļ�
#include "LandOwnerV2.h"
#include "LandOwnerV3.h"
#include "LandOwnerV5.h"
#include "Student.h"
using namespace std;

int main()
{
	// this ָ�룬�����Ա�����ĵ�һ��Ĭ����������
	Student* ptrStu1 = new Student("�����Ȱ�", "΢��Ů��");
	ptrStu1->AddScore(88.9f);
	ptrStu1->AddScore(92.9f);
	ptrStu1->AddScore(80.0f);
	ptrStu1->AddScore(95.2f);
	ptrStu1->AddScore(88.2f);
	ptrStu1->ShowInfo();

	// ʹ��ջ�ڴ�
	Student Stu2 = { "��ǿ��","��������" };
	Stu2.AddScore(88.5f);
	Stu2.AddScore(76);
	Stu2.AddScore(72);
	Stu2.AddScore(66);
	Stu2.AddScore(77);
	Stu2.ShowInfo();

	Student& scholar1 = Stu2.GetSuperScholar(*ptrStu1);
	Student& scholar2 = ptrStu1->GetSuperScholar(Stu2);

	cout << "ѧ���ǣ�" << scholar1.GetName() << endl;
	cout << "ѧ���ǣ�" << scholar2.GetName() << endl;

	delete ptrStu1;

	// scholar1��ջ�ڴ������ã����Զ��ͷ�

	/*------------------
	// ������汾
	LandOwnerV5* ptr_landOwner1 = new LandOwnerV5();
	LandOwnerV5* ptr_landOwner2 = new LandOwnerV5("������");
	LandOwnerV5* ptr_landOwner3 = new LandOwnerV5("������", "��", 10, 999);
	ptr_landOwner1->ShowInfo();
	ptr_landOwner2->ShowInfo();
	ptr_landOwner3->ShowInfo();

	// ��������
	ptr_landOwner1->TouchCard(20);

	delete ptr_landOwner1;
	delete ptr_landOwner2;
	delete ptr_landOwner3;
	/*-----------------------
	// ���캯������
	Student stu1;		// ��ջ�ڴ���ֱ�ӷ���ռ�
	Student stu2("����", "��ͨ��ͥ");
	Student stu3(32);
	Student stu4 = 50;
	stu2.ShowInfo();

	Student* stu5 = new Student("�ܿ���", "�ٴ�����");	// ��stu5����һ��student���ڴ棬�ڶ��ڴ����·���һ���ռ�
	stu5->ShowInfo();	// ���ʶ��ڴ�

	// ������ʹ�����ʱ���ǵ�delete���ͷ��ڴ�
	delete stu5;

	//--------------------

	/* �������汾����װ
	LandOwnerV3 landOwner3;

	/* �ڶ����汾 .h
	LandOwnerV2 landOwner2;
	landOwner2.name = "��������";
	landOwner2.TouchCard(10);
	landOwner2.score = 100;
	landOwner2.ShowScore();

	
	/* ��һ���汾 .hpp
	LandOwnerV1 landOwner1;		// ������һ��LandOwnerV1�ı���
	// ���ö���ĳ�Ա����
	// ����ֱ��ʹ�ö����˽�г�Ա
	landOwner1.TouchCard(100);
	*/
	system("PAUSE");
	return 0;
}