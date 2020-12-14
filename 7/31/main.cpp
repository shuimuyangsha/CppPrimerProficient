#include <iostream>
using namespace std;
int main()
{
	float* pF = NULL;
	pF = new float;		//动态申请一块内存，用pF去指向
	*pF = 4.321f;
	float f2 = 5.321f;
	cout<<"pF指向的地址:"<<pF<<endl;
	cout<<"*pF的值:"<<*pF<<endl;
	pF = &f2;			//让pF指向了另一地址，此时上面申请的内存变为不可用
	cout<<"pF指向了f2的地址:"<<pF<<endl;
	if(*pF>5)
	{
		cout<<"*pF的值:"<<*pF<<endl;
	}
	return 0;
}
