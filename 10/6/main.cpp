#include<iostream>
using namespace std;

namespace MyName1						//定义命名空间
{
	int iValue=10;
};

namespace MyName2						//定义命名空间
{
	int iValue=20;
};

int iValue=30;								//全局变量

int main()
{
	cout<<MyName1::iValue<<endl;			//引用MyName1命名空间中的变量
	cout<<MyName2::iValue<<endl;			//引用MyName2命名空间中的变量
	cout<<iValue<<endl;
	return 0;
}
