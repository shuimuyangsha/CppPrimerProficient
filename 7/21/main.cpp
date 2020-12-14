#include<iostream>
using namespace std;
void main()
{
	char str1[50],str2[30],*p1,*p2;
	p1=str1;				//让两个指针分别指向两个数组
	p2=str2;
	cout << "please input string1:"<< endl;
	gets(str1);				//给str1赋值
	cout << "please input string2:"<< endl;
	gets(str2);				//给str2赋值
	while(*p1!='\0')
	p1++;				//把p1移动到str1的末尾
	while(*p2!='\0')
	*p1++=*p2++;			//取p2指向的值赋到p1指向的地址(str1的末尾)，即连接str1和str2
	*p1='\0';
	cout << "the new string is:"<< endl;
	puts(str1);				//输出新的str1
}
