#include "integer.h"



integer::integer() : m_value(0)	// ����Ĭ�Ϲ���ʱ��Ĭ�ϸ�m_value��ֵ0
{
}

const integer integer::operator+(const integer & other) const
{
	integer result(this->m_value + other.m_value);		// �������ؽ������
	return result;
}


integer::~integer()
{
}
