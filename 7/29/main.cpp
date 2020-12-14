#include <iostream>
using std::cout;
using std::endl;
int* newPointerGet(int* p1)
{
	int k1 = 55;
	p1 =new int;					//变为堆内存。
	* p1 = k1;					//int型变量赋值操作
	return p1;
}
int* PointerGet(int *p2)
{
	int k2 = 55;
	p2 =&k2;  					//指向函数中定义变量所在的栈内存，此段内存在函数执行后销毁
	return p2;
}

int main()
{
	cout<<"输出函数各自返回指针所指向的内存的值"<<endl;
	int* p =NULL;
	p = newPointerGet(p);			//p具有堆内存的地址
	int* i=NULL; 
	i = PointerGet(i); 	 			//i具有栈内存地址，内存内容被销毁
	cout<<"newGet: "<<*p<<" , get: "<<*i<<endl;
	cout<<"i所指向的内存没有被立刻销毁,执行一个输出语句后:"<<endl;  
								//i仍然为55，但不代表程序不会对它进行销毁
	cout<<"newGet: "<<*p<<" , get: "<<*i<<endl;    //执行其他的语句后，程序销毁了栈空间
	delete p;  					//依照p销毁堆内存
	cout<<"销毁堆内存后:"<<endl;
	cout<<"*p:  "<<*p<<endl;
	return 0;
}

