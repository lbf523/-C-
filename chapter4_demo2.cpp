// ���飬ð������
#include <iostream>
using namespace std;

int main()
{
	// 1, ��һ�ֱȽϵĴ������ܸ���-1
	// 2, �ڶ��ֱ���һ�ֱȽϵĴ�����1��

	int nums[] = { 5,3,7,10,2,1,15,19,8,6,17 };
	int len = sizeof(nums) / sizeof(int);
	int temp;

	cout << "����ǰ��";
	for (int n = 0; n < len; n++) {
		cout << nums[n] << ',';
	}

	// ѡ������
	int min;	// �ٶ���һ��Ϊ��Сֵ
	int minindex;		// �±�
	for (int i = 0; i < len; i++) {
		min = nums[i];
		minindex = i;
		for (int j = i+1; j < len; j++) {
			if (nums[j] < min)
			{
				min = nums[j];
				minindex = j;
			}
		}
		if (minindex > i) {
			temp = nums[minindex];
			nums[minindex] = nums[i];
			nums[i] = temp;
		}
	}

	/*
	// ð������
	// 1, ���ѭ����������
	for (int i = len-1; i > 0; i--) {
		// 2, �ڲ�ѭ������ÿ�ֵıȽϺͽ���
		for (int j = len-i; j > 0; j--) {
			if (nums[j-1 ] > nums[j]) 
			{
				temp = nums[j-1];
				nums[j-1] = nums[j];
				nums[j] = temp;
			}
		}
	}
	*/

	cout << "\n�����";
	for (int n = 0; n < len; n++) {
		cout << nums[n] << ',';
	}
	cout << endl;

	// ����
	for (int i = 0; i < len / 2; i++) {
		temp = nums[i];
		nums[i] = nums[len-i-1];
		nums[len-i-1] = temp;
	}
	cout << "\n�����";
	for (int n = 0; n < len; n++) {
		cout << nums[n] << ',';
	}
	cout << endl;
	system("PAUSE");
}