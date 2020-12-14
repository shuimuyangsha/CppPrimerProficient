#include <iostream>
using std::cout;
using std::endl;
int* pointerGet(int* p)
{
	int i = 9;
	cout<<"函数体中i的地址"<<&i<<endl;
	cout<<"函数体中i的值:"<<i<<endl;
	p = &i;
	return p;
}
int main()
{
	int* k = NULL;			
	cout<<"k的地址:"<<k<<endl;			//输出k的初始地址
	cout<<"执行函数，将k赋予函数返回值"<<endl;
	k = pointerGet(k);					//调用函数获得一个指向变量i的地址的指针
	cout<<"k的地址:"<<k<<endl;			//输出k的新地址(i的地址)
	cout<<"k所指向内存的内容:"<<*k<<endl;	//输出一个随机数
}
