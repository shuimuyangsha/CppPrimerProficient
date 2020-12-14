#include <iostream >
#include <string >
using namespace std;
template<class Type>
Type min(Type a,Type b)//定义函数模板
{
	if(a < b)
		return a;
	else
		return b;
}
char * min(char * a,char * b)// 重载函数模板
{
	if(strcmp(a,b))
		return b;
	else 
		return a;
}
void main ()
{
	cout << "最小值：" << min(10,1) << endl;
	cout << "最小值：" << min('a','b') << endl;
	cout << "最小值：" << min("hi","mr") << endl;
}
