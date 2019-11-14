#include "Student.h"



Student::Student()
{
	cout << "Ĭ�Ϲ���" << endl;
}
Student::Student(int age)
{
	Setage(age);
	InitScores();
	cout << "���ô��ι��죺Student(int age)" << endl;
}
Student::Student(string name, string desc)	: m_Name(name), m_desc(desc)// ��ʼ�������б��д��
{
	//m_Name = name;	//�ȼ�	SetName(name);
	//m_desc = desc;
	InitScores();
	cout << "���ô��ι��죺Student(string name, string desc)" << endl;
}

void Student::ShowInfo()
{
	cout << m_desc << "-" << m_Name << endl;
	for (int i = 0; i < scoresCount - 1; i++) {
		cout << this->scores[i] << "\t";
	}
	cout << endl;
}

// ----------- this ָ�� --------------
/*void myShow(const Student* thiz)	// c���Ե�д����this��C++��ʱ������������һ��Ĭ�ϲ���
{
	thiz->AddScore(88.9f);
}*/

void Student::InitScores()
{
	this->scores = new float[1];		// ����һ��float�ռ�
	this->scoresCount = 1;				// ѧ���ɼ�����Ϊ1
}

void Student::AddScore(float score)
{
	this->scores[this->scoresCount - 1] = score;	// ��scores��������һ��Ԫ�ظ�ֵ
	// 1. ����һ�������飬����scoresCount+1���ռ�
	// 2. ��scores�����ݸ��Ƶ���������
	// 3. scoresCount++
	// 4. scoresָ��������
	float* newScores = new float[scoresCount + 1];
	float* oldScores = scores;		// ����Ұָ��
	memcpy(newScores, scores, sizeof(float)*scoresCount);	// ��scoresCount��Ԫ�ش������鸴�Ƶ�������
	scoresCount++;
	scores = newScores;
	delete oldScores;		// ɾ���ɵ�ָ���ַ
}

/**
 * ����ѧ�Զ���
 * @param otherStu Ҫ�Աȵ�����һ��ѧ��
 * @return �����ֱܷȽϴ���Ǹ�ѧ������
 */
float Student::GetTotal()
{
	float sum = 0;
	for (int i = 0; i < scoresCount - 1; i++) {
		sum += scores[i];
	}
	return sum;		// ��������ֱ�Ӹ�ֵ���У�����д������
}
Student& Student::GetSuperScholar(Student& otherStu)
{
	// �ֱ��������ѧ�����ܷ�
	if (this->GetTotal() > otherStu.GetTotal()) {
		return *this;		// ���ص�ǰ��������ã�δ���������ͬ
	}
	else {
		return otherStu;
	}
}
/*
����������~����
	1.�������ʱ�Զ����õ������Ա����
	2.��������һ������������������ͷŶ���ʹ�õ���Դ�������ٶ���ķ�static���ݳ�Ա�����ۺ�ʱһ���������٣������Զ���������������
	3.��������û�в�����ֻ��һ��

	���캯����������ÿ�ʼʱ����
	����������������ý���ʱ����
*/
Student::~Student()
{
	delete this->scores;
	cout << m_Name << "���ͷ�" << endl;
}
