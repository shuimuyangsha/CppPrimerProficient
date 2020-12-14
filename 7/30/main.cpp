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
	int* pI = NULL;  //将指针初始化为空
	int k1 = 3;
	int k2 = 5;
	pI = sum(k1,k2);
	cout<<"*pI的值:"<<*pI<<endl;
	cout<<"也许*pI还保留着i值，但它已经被程序认定为销毁"<<endl;
	cout<<"*pI的值:"<<*pI<<endl;
	cout<<"尝试修改*pI"<<endl;
	*pI = 3;
	for(int i= 0;i<3;i++)
	{
		cout<<"修改被销毁的内存后*pI的值:"<<*pI<<endl;
	}
}
