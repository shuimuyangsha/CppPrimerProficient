#include <iostream>
void swap(int* a,int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int* pI =new int;
	*pI = 3;
	int k =5;
	swap(pI,&k);
	std::cout<<"*pI:"<<*pI<<std::endl;	 //ʹ��std���ֿռ�
	std::cout<<"k:"<<k<<std::endl;
	delete pI ;							 //���ն�̬�ڴ�
	pI = NULL; 						 	//��pI�ÿգ���ֹʹ�������ٵ��ڴ档
										//����һ��䲻�ɵߵ�����������ڴ�й©
	return 0;
}
