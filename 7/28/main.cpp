#include <iostream>
using namespace std;
int main()
{
	int* pI1 = NULL;
	pI1 = new int;				//���붯̬����
	*pI1 = 111;				//��̬������ڴ洢������ݱ��111�����ͱ���
	cout<<"pI�ڴ������"<<*pI1<<",pI��ָ��ĵ�ַ"<<pI1<<endl;
	int* pI2;
	//*pI2 = 222; 				//ֱ�Ӹ�ֵ�ᵼ�´��󣡣���
	int k ;					//ջ�еı���
	pI2 = &k; 					//����ջ�ڴ�
	*pI2 = 222;				//�����ڴ�󷽿ɸ�ֵ
	cout<<"pI�ڴ������"<<*pI2<<",pI��ָ��ĵ�ַ"<<pI2<<endl;
	return 0;
}
