/* �ڶ��� �κ���ҵ */
#include <iostream>
using namespace std;

int main()
{
	// �Ʊ���ϰ1
	cout << "--------- exercise 1 -------" << endl;
	cout << "int		����" << endl;
	cout << "short		������" << endl;
	cout << "long		������" << endl;
	cout << "bool		��������" << endl;
	cout << "char		�ַ�����" << endl;
	cout << "float		�����ȸ�����" << endl;
	cout << "double		˫���ȸ�����" << endl;

	// �Ʊ���ϰ2
	cout << "--------- exercise 2 -------" << endl;
	int a, b, c;
	cout << "������ a =" << endl;
	cin >> a;
	cout << "������ b =" << endl;
	cin >> b;
	cout << endl << "����ǰ"
		<< "\t" << "a=" << a
		<< "\t" << "b=" << b << endl;
	c = a;
	a = b;
	b = c;
	cout << "������"
		<< "\t" << "a=" << a
		<< "\t" << "b=" << b << endl;

	// �Ʊ���ϰ3
	cout << "--------- exercise 3 -------" << endl;
	char d;
	cout << "������һ��Сд��ĸ��\n";
	cin >> d;
	d -= 32;
	cout << "ת����Ϊ��\n" << d << endl;

	// �κ���ϰ
	char ab = 97;
	cout << ab << endl;

	system("PAUSE");
}