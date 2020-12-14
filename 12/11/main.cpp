#include <iostream >
#include <string >
using namespace std;
template<class Type>
Type add(Type a,Type b)//定义函数模板
{
	return a+b;
}

char * add(char * a,char * b)// 重载函数模板
{
	strcat(a,b); 
	return a;
}

void main ()
{
	/*Type 进行整型、浮点*/
	//int a=0,b=0;
	//cout << "Input a and b";
	//cin >>a >>b;
	//cout << "和为：" << add(a,b) << endl;
	
	//float a=0.0,b=0.0;
	//cout << "Input a and b";
	//cin >>a >>b;
	//cout << "和为：" << add(a,b) << endl;
	/*重载以后可以进行字符串相加*/
	char a[128];
	char b[128];
	cout << "Input a and b" << endl;
	cin >>a >>b;
	cout << "和为：" << add(a,b) << endl;
}


