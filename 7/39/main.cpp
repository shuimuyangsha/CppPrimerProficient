#include <iostream>
using namespace std;
static float  global = 1.111f;		//静态全局变量
void offset(float && f)			//右值引用
{
	global += f;
}
float getFloat()
{
	float f = 4.444f;
	return f;
}
void offset(float& f)  			//重载了offset函数(左值引用)
{
	global -= f;
}
int main()
{
	float u = 10.000f;
	cout << "global:" << global << endl;
	offset(3.333f);   			//调用右值引用函数
	cout << "global:" << global << endl;
	offset(getFloat() + 2.222);
	cout << "global:" << global << endl;
	offset(u);   				//左值引用
	cout << "global:" << global << endl;
	return 0;
}
