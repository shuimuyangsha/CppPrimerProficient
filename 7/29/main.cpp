#include <iostream>
using std::cout;
using std::endl;
int* newPointerGet(int* p1)
{
	int k1 = 55;
	p1 =new int;					//��Ϊ���ڴ档
	* p1 = k1;					//int�ͱ�����ֵ����
	return p1;
}
int* PointerGet(int *p2)
{
	int k2 = 55;
	p2 =&k2;  					//ָ�����ж���������ڵ�ջ�ڴ棬�˶��ڴ��ں���ִ�к�����
	return p2;
}

int main()
{
	cout<<"����������Է���ָ����ָ����ڴ��ֵ"<<endl;
	int* p =NULL;
	p = newPointerGet(p);			//p���ж��ڴ�ĵ�ַ
	int* i=NULL; 
	i = PointerGet(i); 	 			//i����ջ�ڴ��ַ���ڴ����ݱ�����
	cout<<"newGet: "<<*p<<" , get: "<<*i<<endl;
	cout<<"i��ָ����ڴ�û�б���������,ִ��һ���������:"<<endl;  
								//i��ȻΪ55������������򲻻������������
	cout<<"newGet: "<<*p<<" , get: "<<*i<<endl;    //ִ�����������󣬳���������ջ�ռ�
	delete p;  					//����p���ٶ��ڴ�
	cout<<"���ٶ��ڴ��:"<<endl;
	cout<<"*p:  "<<*p<<endl;
	return 0;
}

