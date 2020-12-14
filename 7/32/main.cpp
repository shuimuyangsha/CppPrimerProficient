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
	std::cout<<"*pI:"<<*pI<<std::endl;	 //使用std名字空间
	std::cout<<"k:"<<k<<std::endl;
	delete pI ;							 //回收动态内存
	pI = NULL; 						 	//将pI置空，防止使用已销毁的内存。
										//和上一语句不可颠倒，否则将造成内存泄漏
	return 0;
}
