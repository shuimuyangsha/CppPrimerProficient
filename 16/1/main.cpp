#include <iostream.h>
#include <strstrea.h>
void main()
{
	char buf[]="12345678";
	int i,j;
	istrstream s1(buf);
	s1 >> i;//���ַ���ת��Ϊ����
	istrstream s2(buf,3);
	s2 >> j; //���ַ���ת��Ϊ����
	cout << i+j <<endl;//�����������
}
