#pragma once
#ifndef CONSTDEMO_H_INCLUDE
#define CONSTDEMO_H_INCLUDE

#include <iostream>
using namespace std;

// 1. const���γ�Ա����
void ConstDemo1()
{
	int num1;
	const int num2 = 111;
	//num2 = 2048;	//��num2�� : ���ܸ�������ֵ
	const int *ptr1_num1 = &num1;
	int const *ptr2_num1 = &num1;
	ptr1_num1 = &num2;	// �Ϸ�
	//ptr1_num1 = 1234;	// ���Ϸ�
	// const����ָ�����ʱ��
	// 1. ֻ��һ��constʱ�����constλ��*ָ�����ࣺ��ʾָ����ָ�������ǳ���������ͨ����ָ���޸�ʵ������
	//		ָ�뱾���Ǳ���������ָ�������ڴ�
	// 2.  ֻ��һ��constʱ�����constλ��*ָ����Ҳࣺ��ʾָ�뱾���ǳ���������ָ�������ڴ浥Ԫ����ָ������ݿ����޸�
	int* const ptr3_num1 = &num1;
	//ptr3_num1 = ptr2_num1;	// ���Ϸ�
	// 3. ���������constλ��ָ���������ָ࣬���ָ��ָ������ݶ����ܸ�
}

// 2. const���κ�������
void ConstTest2(const int num)
{
	//num = 123;	// ���ݽ����Ĳ����ں������ڲ��ܸģ������α���ʱ������һ��
}
class Computer
{
public:
	Computer(int core) { this->m_core = core; }
	void buy() const{}
	void buy(int core){}
	void SetCore(int core) { this->m_core = core; }		// �޸ĵ��Եĺ���Ƶ��
	int GetCore() const{ return this->m_core; }
private:
	int m_core;		// cpu��Ƶ
};

void ConstTest3(const Computer& computer)
{
	// const�޸�����ʱ�������޸����ö����е��κγ�Ա�����Ա������ݵĲ���������Ҫһ���µĸ���
	computer.buy();	// const ��Ա�������ܵ��÷�const��Ա����
	// ʹ��const���ݶ��������ʱ�������𵽲�copy�����Ŀ�ģ���ʡЧ�ʣ�
}

// 3. const���η���ֵ
// ǿ����ʹ��const�����������Ϳ������Ч��
const Computer & GetMax(const Computer &com1, const Computer &com2)
{
	if (com1.GetCore() > com2.GetCore()) {
		return com1;
	}
	return com2;
}
#endif // !CONSTDEMO_H_INCLUDE
