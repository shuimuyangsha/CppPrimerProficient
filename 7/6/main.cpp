#include<iostream>
using namespace std;
void main()
{
	int i=0,j=0;					//定义整型变量
	char a[100],b[50];			//定义字符型数组			
	cout <<"please input string1:" << endl;
	cin >> a;					//输入字符串存于数组a中
	cout  << "please input string2:" << endl;
	cin >> b;					//输入字符串存于数组b中
	while(a[i]!='\0')				//逐个遍历数组a中的元素，直到遇到字符串结束标志
		i++;
	while(b[j]!='\0')				//逐个遍历数组b中的元素，直到遇到字符串结束标志
		a[i++]=b[j++];			//将数组b中的元素存入数组a中并从数组a原来存放'\0'位置开始，覆盖'\0'
		a[i]='\0';				//在合并后的两个字符串的最后加'\0'
	cout << a << endl;			//输出合并后的字符串
} 

