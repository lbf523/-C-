#include "LandOwnerV3.h"

LandOwnerV3::LandOwnerV3()
{
	// һ��ʹ�ù��캯�����г�Ա������ʼ��
	_name = "������1��";
	_score = 0;
	// ���û������������ʼ��Ϊ0
	memset(_cards, 0, sizeof(_cards));
	cout << "LandOwnerV3 ���޲ι��캯����Ĭ�Ϲ��죩�����ã�" << endl;
	cout << "��ʼ���Ľ�����£�" << endl;
	cout << "\t���ƣ�\t" << _name << endl;
	cout << "\t���֣�\t" << _score << endl;
	cout << "\t�������飺\t";
	for (int i = 0; i < sizeof(_cards) / sizeof(_cards[0]); i++) {
		cout << _cards[i] << ", ";
	}
	cout << endl;
}

void LandOwnerV3::SetScore(long lScore)
{
	if (lScore < 0) {
		// �������Ļ���Ϊ�Ƿ��������ô���־�Ĭ��Ϊ0
		_score = 0;
	}
	else {
		// ����Ϊ����ʱ���Ž��и�ֵ����
		_score = lScore;
	}
}


// ʵ�����Ʒ���
void LandOwnerV3::TouchCard(int cardCount)	// �򷽷�
{
	// ��ʱʡ�Ժ�����ʵ��
	cout << _name << "��" << cardCount << "����" << endl;
}

void LandOwnerV3::ShowScore() {
	cout << _name << "��ǰ�Ļ���Ϊ��" << _score << endl;
}

LandOwnerV3::~LandOwnerV3()
{
}
