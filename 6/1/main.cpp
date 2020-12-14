#include <iostream>
using namespace std;
void ShowMessage(); //函数声明语句
void ShowAge(); //函数声明语句
void ShowIndex(); //函数声明语句
void main()
{
	ShowMessage(); //函数调用语句
	ShowAge(); //函数调用语句
	ShowIndex(); //函数调用语句
}
void ShowMessage()
{
	cout << "HelloWorld!" << endl;
}
void ShowAge()
{
	int iAge=23;
	cout << "age is :" << iAge << endl;
}
void ShowIndex()
{
	int iIndex=10;
	cout << "Index is :" << iIndex << endl;
}
