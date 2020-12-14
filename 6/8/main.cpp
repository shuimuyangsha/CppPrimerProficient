#include <iostream>
using namespace std;
int Add(int x ,int y)				//定义第一个重载函数
{
	cout << "int add" << endl;	//输出信息
	return x + y;				//设置函数返回值
}
double Add(double x,double y)		//定义第二个重载函数
{
	cout << "double add" << endl;	//输出信息
	return x + y;				//设置函数返回值
}
int main()
{
	int ivar = Add(5,2);			//调用第一个Add函数
	float fvar = Add(10.5,11.4);	//调用第二个Add函数
	return 0;
}
