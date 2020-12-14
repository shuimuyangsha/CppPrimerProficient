#include <iostream>
using namespace std;
void swap(int *a,int *b)					 //交换a、b指向的两个地址的值(指针传递)
{	
	int tmp;								//定义一个临时变量
	tmp=*a;								//把a指向的值赋给tmp
	*a=*b;								//把b指向的值赋到a指向的位置
	*b=tmp;								//把tmp赋给b指向的位置
}
void swap(int a,int b)					 //交换a、b的值(值传递)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
void main()
{
	int x,y;
	int *p_x,*p_y;						//定义两个整型指针
	cout << " input two number " << endl;
	cin >> x;							//给x、y赋值
	cin >> y;
	p_x=&x;p_y=&y;						//两个指针分别指向x、y的地址
	cout<<"按指针传递参数交换"<<endl;
	swap(p_x,p_y);						//执行的是参数列表都为指针的swap函数
	cout << "x=" << x <<endl;
	cout << "y=" << y <<endl;
	cout<<"按值传递参数交换"<<endl;
	swap(x,y);							//执行的是参数列表为整型变量的swap函数
	cout << "x=" << x <<endl;
	cout << "y=" << y <<endl;
}
