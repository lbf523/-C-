#pragma once
// ���������
// ����������࣬�����ͷ�װ���࣬�Ա�ʵ����������װ
class integer
{
public:
	integer();
	integer(int value) :m_value(value) {}	// ������ʵ��

	// ����+�������
	// ��һ��const ������Ч��
	// �ڶ���const ��������Ĵ��ݶ��� 
	// ������const �����޸ĳ�Ա����
	const integer operator+(const integer & other) const;
	int IntValue() { return m_value; }
	~integer();
private:
	int m_value;	// ʵ�ʵ��������֣�member��
};

