#include <iostream>
using std::cout;
using std::endl;
int main()
{
	int i = 5;
	const int c = 99; 
	const int* pR = &i;			//���ָ��ֻ������"��"�ڴ����ݣ������Ըı��Լ��ĵ�ַ��
	int* const pC = &i;			//���ָ�뱾���ǳ��������ܸı�ָ�򣬵����ܹ��ı��ڴ�����ݡ�
	const int* const pCR = &i;	//���ָ��ֻ������"��"�ڴ�����,���Ҳ��ܸı�ָ��
	cout<<"����ָ�붼ָ����ͬһ������i��ͬһ���ڴ�"<<endl;
	cout<<"ָ������ָ��pR����:"<<endl;
	//*pR = 6             			//ȥ�����ǰ��ע�ͱ���
	cout<<"ͨ����ֵ����޸�i:"<<endl;
	i = 100;
	cout<<"i:"<<i<<endl;
	cout<<"��pR�ĵ�ַ��ɳ���c�ĵ�ַ:"<<endl;
	pR = &c;
	cout<<"*pR:"<<*pR<<endl;
	cout<<"ָ������ָ��pC����:"<<endl;
	//pC = &c;            					//ȥ�����ǰ��ע�ͱ���
	cout<<"ͨ��pC�ı�iֵ:"<<endl;
	*pC = 6;
	cout<<"i:"<<i<<endl;
	cout<<"ָ������ָ�볣��pCR����:"<<endl;
	//pCR =&c;							//����
	//*pCR =100;							//����
	cout<<"ͨ��pCR�޷��ı��κζ���������������ֻ��"<<endl;
  	return 0;
}
