#include <iostream>
using namespace std;
int main()
{
	int* pI1 = NULL;
	pI1 = new int;				//申请动态分配
	*pI1 = 111;				//动态分配的内存储存的内容变成111的整型变量
	cout<<"pI内存的内容"<<*pI1<<",pI所指向的地址"<<pI1<<endl;
	int* pI2;
	//*pI2 = 222; 				//直接赋值会导致错误！！！
	int k ;					//栈中的变量
	pI2 = &k; 					//分配栈内存
	*pI2 = 222;				//分配内存后方可赋值
	cout<<"pI内存的内容"<<*pI2<<",pI所指向的地址"<<pI2<<endl;
	return 0;
}
