#include "LandOwnerV2.h"



LandOwnerV2::LandOwnerV2()
{
}

// ʵ�����ķ���
void LandOwnerV2::TouchCard(int cardCount)	// �򷽷�
{
	// ��ʱʡ�Ժ�����ʵ��
	cout << name << "��" << cardCount << "����" << endl;
}

void LandOwnerV2::ShowScore() {
	cout << name << "��ǰ�Ļ���Ϊ��" << score << endl;
}

LandOwnerV2::~LandOwnerV2()
{
}
