#include <iostream>
using namespace std;
void main()
{
	int i,a[10];
	int *p;
	//利用循环，分别为10个元素赋值
	for(i=0;i<10;i++)
		a[i]=i;
	//将数组中的10个元素输出到显示设备
	p=&a[0];
	for(i=0;i<10;i++,p++)
		cout << *p << endl;
}
