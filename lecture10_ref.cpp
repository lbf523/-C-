// ����

#include <iostream>

using namespace std;

void Swap1(int, int);
void Swap2(int*, int*);
void Swap3(int&, int&);

int main()
{
	int num1, num2;
	cout << "����������������num1 num2" << '\t';
	cin >> num1 >> num2;
	cout << endl;
	cout << "num1��num2��ֵΪ��" << num1 << '\t' << num2 << endl;
	Swap1(num1, num2);
	cout << "Swap1������num1��num2��ֵΪ��" << num1 << '\t' << num2 << endl;
	Swap2(&num1, &num2);
	cout << "Swap1������num1��num2��ֵΪ��" << num1 << '\t' << num2 << endl;
	Swap3(num1, num2);
	cout << "Swap1������num1��num2��ֵΪ��" << num1 << '\t' << num2 << endl;
	system("PAUSE");
	return 0;
}

// ����������
void Swap1(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

void Swap2(int* p1, int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
// ����Ϊ��������ԭ���ռ�ֵ���ݹ�����ָ��ĸ߼�ʵ��
// 1. ���Ը��Ӽ�����д����
// 2. ����ֱ�Ӵ���ĳ�����󣬶���ֻ�Ǹ�����һ��
// 3. ��������������ʶ�޸ģ�ʹ��const
// 4. ��Ҫ���ؾֲ�����������
// 5. ����������ֵ��Ĭ�Ϸ��ش�������ö�����
void Swap3(int& ref1, int& ref2)
{
	int temp;
	temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}