#include <iostream>
using std::cout;
using std::endl;
int* sum(int a,int b)
{
	int* pS =NULL;
	int c = a+b;
	pS = &c;
	return pS;
}
int main()
{
	int* pI = NULL;  //��ָ���ʼ��Ϊ��
	int k1 = 3;
	int k2 = 5;
	pI = sum(k1,k2);
	cout<<"*pI��ֵ:"<<*pI<<endl;
	cout<<"Ҳ��*pI��������iֵ�������Ѿ��������϶�Ϊ����"<<endl;
	cout<<"*pI��ֵ:"<<*pI<<endl;
	cout<<"�����޸�*pI"<<endl;
	*pI = 3;
	for(int i= 0;i<3;i++)
	{
		cout<<"�޸ı����ٵ��ڴ��*pI��ֵ:"<<*pI<<endl;
	}
}
