#include <iostream>
using std::cout;
using std::endl;
int main()
{
	int i = 5;
	const int c = 99; 
	const int* pR = &i;			//这个指针只能用来"读"内存数据，但可以改变自己的地址。
	int* const pC = &i;			//这个指针本身是常量，不能改变指向，但它能够改变内存的内容。
	const int* const pCR = &i;	//这个指针只能用来"读"内存数据,并且不能改变指向。
	cout<<"三个指针都指向了同一个变量i，同一块内存"<<endl;
	cout<<"指向常量的指针pR操作:"<<endl;
	//*pR = 6             			//去掉语句前方注释报错
	cout<<"通过赋值语句修改i:"<<endl;
	i = 100;
	cout<<"i:"<<i<<endl;
	cout<<"将pR的地址变成常量c的地址:"<<endl;
	pR = &c;
	cout<<"*pR:"<<*pR<<endl;
	cout<<"指向常量的指针pC操作:"<<endl;
	//pC = &c;            					//去掉语句前方注释报错
	cout<<"通过pC改变i值:"<<endl;
	*pC = 6;
	cout<<"i:"<<i<<endl;
	cout<<"指向常量的指针常量pCR操作:"<<endl;
	//pCR =&c;							//报错
	//*pCR =100;							//报错
	cout<<"通过pCR无法改变任何东西，真正作到了只读"<<endl;
  	return 0;
}
