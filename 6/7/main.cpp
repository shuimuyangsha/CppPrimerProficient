#include <iostream>
using namespace std;
typedef unsigned int UINT; 		//自定义类型
long Fac(const UINT n)		//定义函数
{
	long ret = 1;				//定义结果变量
	for(int i=1; i<=n; i++)			//累计乘积
	{
		ret *= i;
	}
	return ret;					//返回结果
}

void main()
{
	int n ;
	long f;
	cout << "please input a number" << endl;
	  cin >> n ;
	f=Fac(n);
	cout << "Result :" << f << endl;
}
