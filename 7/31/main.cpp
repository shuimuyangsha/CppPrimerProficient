#include <iostream>
using namespace std;
int main()
{
	float* pF = NULL;
	pF = new float;		//��̬����һ���ڴ棬��pFȥָ��
	*pF = 4.321f;
	float f2 = 5.321f;
	cout<<"pFָ��ĵ�ַ:"<<pF<<endl;
	cout<<"*pF��ֵ:"<<*pF<<endl;
	pF = &f2;			//��pFָ������һ��ַ����ʱ����������ڴ��Ϊ������
	cout<<"pFָ����f2�ĵ�ַ:"<<pF<<endl;
	if(*pF>5)
	{
		cout<<"*pF��ֵ:"<<*pF<<endl;
	}
	return 0;
}
